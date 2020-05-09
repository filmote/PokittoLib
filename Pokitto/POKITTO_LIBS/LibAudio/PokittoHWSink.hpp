#pragma once

#include <MemOps>

#pragma GCC diagnostic ignored "-Wattributes"
#define NAKED __attribute__((naked))

namespace Audio {

    inline void NAKED mix(void* dst, const void* src, std::size_t count) {
        __asm__ volatile (
            ".syntax unified" "\n"
            "push {r4, lr}" "\n"
            "rsbs r2, 0" "\n"
            "beq 2f" "\n"
            
            "subs r0, r2" "\n"
            "subs r1, r2" "\n"

            "1:ldrb r3, [r1, r2]" "\n"
            "ldrb r4, [r0, r2]" "\n"
            "subs r3, 127" "\n"
            "adds r3, r4" "\n"

            "mvns r4, r3" "\n"
            "asrs r4, 16" "\n"
            "ands r3, r4" "\n"
            
            "lsls r4, r3, 23" "\n"
            "asrs r4, 31" "\n"
            "orrs r3, r4" "\n"

            "strb r3, [r0, r2]" "\n"
            "adds r2, 1" "\n"
            "bne 1b" "\n"
            
            "2: pop {r4, pc}" "\n"
            );
    }

    template <u32 channelCount, u32 sampleRate>
    class Sink {
        static constexpr u32 bufferCount = 2;
        static constexpr u32 TIMER_32_0_IRQn = 18;

        internal::Channel channels[channelCount];
        u8 wasInit = false;

        void enableDAC() {
            volatile auto *PIO1 = (volatile unsigned int *) 0x40044060;
            volatile auto *PIO2 = (volatile unsigned int *) 0x400440F0;
            volatile auto *DIR1 = (volatile unsigned int *) 0xA0002004;
            volatile auto *DIR2 = (volatile unsigned int *) 0xA0002008;
            volatile auto *SET1 = (volatile unsigned int *) 0xA0002204;
            PIO1[28] = PIO1[29] = PIO1[30] = PIO1[31] = 1<<7;
            PIO2[20] = PIO2[21] = PIO2[22] = PIO2[23] = 1<<7;
            *DIR1 |= (1<<28) | (1<<29) | (1<<30) | (1<<31);
            *DIR2 |= (1<<20) | (1<<21) | (1<<22) | (1<<23);
            *DIR1 |= 1 << 17;
            *SET1 = 1 << 17;
        }

/* * /
        static void IRQ(void){
            if(!(LPC_CT32B0->IR & (1 << 1)))
                return;
            LPC_CT32B0->IR = (1 << 1);

            auto currentBuffer = audio_playHead >> 9;
            if(!audio_state[currentBuffer])
                return;

            writeDAC(audio_buffer[audio_playHead]);
            audio_playHead++;

            auto nextBuffer = audio_playHead >> 9;

            if(currentBuffer != nextBuffer){
                audio_state[currentBuffer] = 0;
                if(nextBuffer == bufferCount){
                    audio_playHead = 0;
                }
            }
        }
/*/
        static NAKED void IRQ(){
            __asm__ volatile(
                ".syntax unified" "\n"
                "ldr r0, =0x40014000" "\n"
                "ldr r1, [r0]" "\n"
                "lsls r1, 30" "\n"
                "bpl 2f" "\n"
                "ldr r1, =2" "\n"
                "str r1, [r0]" "\n"
                "ldr r2, =audio_playHead" "\n"
                "ldr r1, =audio_buffer" "\n"
                "ldr r3, [r2]" "\n"

                "ldrb r0, [r1, r3]" "\n"
                "ldr r1, =0xA0000020 + 28\n"
                "strb r0, [r1]      \n"
                "lsrs r0, 1         \n"
                "strb r0, [r1, 1]   \n"
                "lsrs r0, 1         \n"
                "strb r0, [r1, 2]   \n"
                "lsrs r0, 1         \n"
                "strb r0, [r1, 3]   \n"
                "lsrs r0, 1         \n"
                "strb r0, [r1, 24]  \n"
                "lsrs r0, 1         \n"
                "strb r0, [r1, 25]  \n"
                "lsrs r0, 1         \n"
                "strb r0, [r1, 26]  \n"
                "lsrs r0, 1         \n"
                "strb r0, [r1, 27]  \n"
                "lsrs r0, 1         \n"

                "lsrs r0, r3, 9"    "\n"
                "adds r3, 1"        "\n"
                "lsls r3, 22"       "\n"
                "lsrs r3, 22"       "\n"
                "str r3, [r2]"      "\n"
                "lsrs r3, 9"        "\n"
                "cmp r3, r0"        "\n"
                "beq 2f"            "\n"
                "movs r3, 0"        "\n"
                "ldr r1, =audio_state"      "\n"
                "strb r3, [r1, r0]"         "\n"
                "2: bx lr" "\n"
                );
        }
/* */

        void (*nextHook)(bool);

        void init(){
            if(wasInit)
                return;

            for(int i=0; i<channelCount; ++i){
                channels[i].source = nullptr;
            }

            audio_state[0] = 0;
            audio_state[1] = 0;
            audio_playHead = 0;


            MemOps::set(audio_buffer, 127, 1024);
            enableDAC();
            wasInit = true;

            /* Initialize 32-bit timer 0 clock */
            LPC_SYSCON->SYSAHBCLKCTRL |= (1 << 9);
            /* Timer rate is system clock rate */
            u32 timerFreq = SystemCoreClock;
            /* Timer setup for match and interrupt at TICKRATE_HZ */
            /* Disable timer, set terminal count to non-0 */
            u32 reg = LPC_CT32B0->TCR;
            LPC_CT32B0->TCR = 0;
            LPC_CT32B0->TC = 1;
            /* Reset timer counter */
            LPC_CT32B0->TCR = (1 << 1);
            /* Wait for terminal count to clear */
            while(LPC_CT32B0->TC != 0);
            /* Restore timer state */
            LPC_CT32B0->TCR = reg;
            /* Enable both timers to generate interrupts when time matches */
            LPC_CT32B0->MCR |= (1 << ((1) * 3));
            /* Setup 32-bit timer's duration (32-bit match time) */
            LPC_CT32B0->MR1 = (timerFreq / sampleRate);
            /* Setup both timers to restart when match occurs */
            LPC_CT32B0->MCR |= (1 << ((1 * 3) + 1));
            /* Start both timers */
            LPC_CT32B0->TCR |= (1 << 0);
            /* Clear both timers of any pending interrupts */
            NVIC_ClearPendingIRQ((IRQn_Type)TIMER_32_0_IRQn);
            /* Redirect IRQ vector - Jonne*/
            NVIC_SetVector((IRQn_Type)TIMER_32_0_IRQn, (uint32_t)IRQ);
            /* Enable both timer interrupts */
            NVIC_EnableIRQ((IRQn_Type)TIMER_32_0_IRQn);
        }

    public:

        Sink(){
            nextHook = Pokitto::Core::updateHook;
            Pokitto::Core::updateHook =
                +[](bool isFrame){
                     auto self = reinterpret_cast<Sink*>(Audio::internal::sinkInstance);
                     self->update();
                     self->nextHook(isFrame);
                 };
            Audio::internal::sinkInstance = this;
            Audio::connect =
                +[](u32 channelNumber, void *data, Source source){
                     auto self = reinterpret_cast<Sink*>(Audio::internal::sinkInstance);
                     self->connect(channelNumber, data, source);
                 };
        }

        void connect(u32 channelNumber, void *data, Source source){
            init();
            if(channelNumber >= channelCount)
                channelNumber = channelCount-1;
            channels[channelNumber].source = source;
            channels[channelNumber].data = data;
        }

        void update(){
            init();
            for(u32 i = 0; i < bufferCount; ++i){
                if(audio_state[i])
                    continue;
                u8 *buffer = audio_buffer + i * 512;
                for(u32 c = 0; c < channelCount; ++c){
                    auto source = channels[c].source;
                    if(source){
                        source(buffer, channels[c].data);
                    }
                }
                audio_state[i] = 1;
            }
        }

        template <u32 channel>
        void stop(){
            channels[channel].source = nullptr;
        }

    };
}
