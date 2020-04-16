#ifndef POKITTOTUI_UITILESETS_PUITS_ULTIMATEUTOPIA4_HPP
#	define POKITTOTUI_UITILESETS_PUITS_ULTIMATEUTOPIA4_HPP


namespace puits
{
	// A 6x6 UI Tileset with round boxes and soft letters.
	// This is the same than UltimateUtopia, but with a 0-3 color range.
	namespace UltimateUtopia4
	{
		// Color mapping information.
		struct Colors
		{
			static constexpr auto max = 4;
			
			static constexpr auto outside = 0;
			
			// Background of the box and all widgets.
			// - Background has a checkerboard pattern.
			// - You can make a unique color by setting the same one to bg1 and bg2, using mapColor.
			// - You can also set both to transparent (0) to have floating texts.
			// - Setting only one to transparent (0) will make it less "opaque" visually.
			static constexpr auto bg = 1;
			
			// Borders for Gauge, Box and Checkbox.
			static constexpr auto border = 2;
			static constexpr auto borderShine = 3;
			
			// Text, Checkbox' Check, Arrows, Gauge's Filling' shine.
			static constexpr auto main = 3;
		};
		
		// The tileset itself.
		const uint8_t tileSet[] = {
			0x00,0x00,0x00,0x00,0x00,0x00,
			0x00,0x00,0x00,0x00,0x00,0x00,
			0x00,0x00,0x00,0x00,0x00,0x00,
			0x00,0x00,0x00,0x00,0x00,0x00,
			0x00,0x00,0x00,0x00,0x00,0x00,
			0x00,0x00,0x00,0x00,0x00,0x00,
			0x01,0x03,0x01,0x01,0x01,0x01,
			0x01,0x03,0x03,0x01,0x01,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x01,0x03,0x03,0x01,0x01,0x01,
			0x01,0x03,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x03,0x01,0x01,
			0x01,0x01,0x03,0x03,0x01,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x01,0x01,0x03,0x03,0x01,0x01,
			0x01,0x01,0x01,0x03,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x03,0x03,0x03,0x03,0x03,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x03,0x03,0x03,0x03,0x03,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x02,0x02,0x02,0x02,
			0x01,0x02,0x01,0x01,0x01,0x01,
			0x01,0x02,0x01,0x01,0x01,0x01,
			0x01,0x02,0x01,0x01,0x01,0x01,
			0x01,0x01,0x02,0x02,0x02,0x02,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x02,0x02,0x02,0x02,
			0x01,0x02,0x03,0x01,0x01,0x01,
			0x01,0x02,0x03,0x01,0x01,0x01,
			0x01,0x02,0x03,0x01,0x01,0x01,
			0x01,0x01,0x02,0x02,0x02,0x02,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x02,0x02,0x02,0x02,
			0x01,0x02,0x03,0x03,0x01,0x01,
			0x01,0x02,0x03,0x03,0x01,0x01,
			0x01,0x02,0x03,0x03,0x01,0x01,
			0x01,0x01,0x02,0x02,0x02,0x02,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x02,0x02,0x02,0x02,
			0x01,0x02,0x03,0x03,0x03,0x01,
			0x01,0x02,0x03,0x03,0x03,0x01,
			0x01,0x02,0x03,0x03,0x03,0x01,
			0x01,0x01,0x02,0x02,0x02,0x02,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x02,0x02,0x02,0x02,
			0x01,0x02,0x03,0x03,0x03,0x03,
			0x01,0x02,0x03,0x03,0x03,0x03,
			0x01,0x02,0x03,0x03,0x03,0x03,
			0x01,0x01,0x02,0x02,0x02,0x02,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x02,0x02,0x02,0x02,0x02,0x02,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x02,0x02,0x02,0x02,0x02,0x02,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x02,0x02,0x02,0x02,0x02,0x02,
			0x03,0x01,0x01,0x01,0x01,0x01,
			0x03,0x01,0x01,0x01,0x01,0x01,
			0x03,0x01,0x01,0x01,0x01,0x01,
			0x02,0x02,0x02,0x02,0x02,0x02,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x02,0x02,0x02,0x02,0x02,0x02,
			0x03,0x03,0x01,0x01,0x01,0x01,
			0x03,0x03,0x01,0x01,0x01,0x01,
			0x03,0x03,0x01,0x01,0x01,0x01,
			0x02,0x02,0x02,0x02,0x02,0x02,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x02,0x02,0x02,0x02,0x02,0x02,
			0x03,0x03,0x03,0x01,0x01,0x01,
			0x03,0x03,0x03,0x01,0x01,0x01,
			0x03,0x03,0x03,0x01,0x01,0x01,
			0x02,0x02,0x02,0x02,0x02,0x02,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x02,0x02,0x02,0x02,0x02,0x02,
			0x03,0x03,0x03,0x03,0x01,0x01,
			0x03,0x03,0x03,0x03,0x01,0x01,
			0x03,0x03,0x03,0x03,0x01,0x01,
			0x02,0x02,0x02,0x02,0x02,0x02,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x02,0x02,0x02,0x02,0x02,0x02,
			0x03,0x03,0x03,0x03,0x03,0x01,
			0x03,0x03,0x03,0x03,0x03,0x01,
			0x03,0x03,0x03,0x03,0x03,0x01,
			0x02,0x02,0x02,0x02,0x02,0x02,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x02,0x02,0x02,0x02,0x02,0x02,
			0x03,0x03,0x03,0x03,0x03,0x03,
			0x03,0x03,0x03,0x03,0x03,0x03,
			0x03,0x03,0x03,0x03,0x03,0x03,
			0x02,0x02,0x02,0x02,0x02,0x02,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x02,0x02,0x02,0x02,0x01,0x01,
			0x01,0x01,0x01,0x01,0x02,0x01,
			0x01,0x01,0x01,0x01,0x02,0x01,
			0x01,0x01,0x01,0x01,0x02,0x01,
			0x02,0x02,0x02,0x02,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x02,0x02,0x02,0x02,0x01,0x01,
			0x03,0x01,0x01,0x01,0x02,0x01,
			0x03,0x01,0x01,0x01,0x02,0x01,
			0x03,0x01,0x01,0x01,0x02,0x01,
			0x02,0x02,0x02,0x02,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x02,0x02,0x02,0x02,0x01,0x01,
			0x03,0x03,0x01,0x01,0x02,0x01,
			0x03,0x03,0x01,0x01,0x02,0x01,
			0x03,0x03,0x01,0x01,0x02,0x01,
			0x02,0x02,0x02,0x02,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x02,0x02,0x02,0x02,0x01,0x01,
			0x03,0x03,0x03,0x01,0x02,0x01,
			0x03,0x03,0x03,0x01,0x02,0x01,
			0x03,0x03,0x03,0x01,0x02,0x01,
			0x02,0x02,0x02,0x02,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x02,0x02,0x02,0x02,0x01,0x01,
			0x03,0x03,0x03,0x03,0x02,0x01,
			0x03,0x03,0x03,0x03,0x02,0x01,
			0x03,0x03,0x03,0x03,0x02,0x01,
			0x02,0x02,0x02,0x02,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x02,0x02,0x02,0x02,0x02,0x01,
			0x02,0x01,0x01,0x01,0x02,0x01,
			0x02,0x01,0x01,0x01,0x02,0x01,
			0x02,0x01,0x01,0x01,0x02,0x01,
			0x02,0x02,0x02,0x02,0x02,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x02,0x02,0x02,0x02,0x03,0x01,
			0x02,0x03,0x01,0x03,0x03,0x01,
			0x02,0x03,0x03,0x03,0x02,0x01,
			0x02,0x01,0x03,0x01,0x02,0x01,
			0x02,0x02,0x02,0x02,0x02,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x00,0x00,0x02,0x02,0x02,0x02,
			0x00,0x02,0x03,0x02,0x03,0x02,
			0x02,0x02,0x02,0x02,0x02,0x02,
			0x02,0x03,0x02,0x01,0x01,0x01,
			0x02,0x02,0x02,0x01,0x01,0x01,
			0x02,0x03,0x02,0x01,0x01,0x01,
			0x02,0x02,0x02,0x02,0x02,0x02,
			0x03,0x02,0x03,0x02,0x03,0x02,
			0x02,0x02,0x02,0x02,0x02,0x02,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x02,0x02,0x02,0x02,0x00,0x00,
			0x03,0x02,0x03,0x02,0x02,0x00,
			0x02,0x02,0x02,0x02,0x03,0x02,
			0x01,0x01,0x01,0x02,0x02,0x02,
			0x01,0x01,0x01,0x02,0x02,0x02,
			0x01,0x01,0x01,0x02,0x02,0x02,
			0x01,0x01,0x01,0x02,0x02,0x02,
			0x01,0x01,0x01,0x02,0x02,0x02,
			0x01,0x01,0x01,0x02,0x02,0x02,
			0x01,0x01,0x01,0x02,0x02,0x02,
			0x01,0x01,0x01,0x02,0x02,0x02,
			0x01,0x01,0x01,0x02,0x02,0x02,
			0x01,0x01,0x01,0x02,0x02,0x02,
			0x01,0x01,0x01,0x02,0x02,0x02,
			0x01,0x01,0x01,0x02,0x02,0x02,
			0x02,0x02,0x02,0x02,0x02,0x02,
			0x02,0x02,0x02,0x02,0x02,0x00,
			0x02,0x02,0x02,0x02,0x00,0x00,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x02,0x02,0x02,0x02,0x02,0x02,
			0x02,0x02,0x02,0x02,0x02,0x02,
			0x02,0x02,0x02,0x02,0x02,0x02,
			0x02,0x02,0x02,0x01,0x01,0x01,
			0x02,0x03,0x02,0x01,0x01,0x01,
			0x02,0x02,0x02,0x01,0x01,0x01,
			0x02,0x03,0x02,0x02,0x02,0x02,
			0x00,0x02,0x02,0x02,0x02,0x02,
			0x00,0x00,0x02,0x02,0x02,0x02,
			0x02,0x02,0x02,0x01,0x01,0x01,
			0x02,0x03,0x02,0x01,0x01,0x01,
			0x02,0x02,0x02,0x01,0x01,0x01,
			0x02,0x03,0x02,0x01,0x01,0x01,
			0x02,0x02,0x02,0x01,0x01,0x01,
			0x02,0x03,0x02,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x01,0x03,0x01,0x01,
			0x01,0x03,0x01,0x03,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x01,0x03,0x01,0x01,
			0x03,0x03,0x03,0x03,0x03,0x01,
			0x01,0x03,0x01,0x03,0x01,0x01,
			0x03,0x03,0x03,0x03,0x03,0x01,
			0x01,0x03,0x01,0x03,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x03,0x03,0x03,0x01,
			0x03,0x01,0x03,0x01,0x01,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x01,0x01,0x03,0x01,0x03,0x01,
			0x03,0x03,0x03,0x03,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x01,0x01,0x01,0x03,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x03,0x01,0x01,0x01,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x01,0x01,0x01,0x01,
			0x03,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x01,0x03,0x01,0x01,
			0x03,0x03,0x03,0x01,0x01,0x01,
			0x01,0x03,0x01,0x03,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x03,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x03,0x01,0x01,0x01,0x01,
			0x01,0x03,0x01,0x01,0x01,0x01,
			0x01,0x03,0x01,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x01,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x03,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x03,0x01,0x03,0x01,0x03,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x03,0x01,0x03,0x01,0x03,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x03,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x03,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x03,0x01,
			0x01,0x01,0x01,0x03,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x03,0x01,0x01,0x01,0x01,
			0x03,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x03,0x01,0x01,0x03,0x03,0x01,
			0x03,0x01,0x03,0x01,0x03,0x01,
			0x03,0x03,0x01,0x01,0x03,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x03,0x03,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x03,0x03,0x03,0x03,0x03,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x01,0x01,0x03,0x03,0x01,0x01,
			0x03,0x03,0x01,0x01,0x01,0x01,
			0x03,0x03,0x03,0x03,0x03,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x01,0x01,0x03,0x03,0x01,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x03,0x03,0x01,0x01,
			0x01,0x03,0x01,0x03,0x01,0x01,
			0x03,0x03,0x03,0x03,0x03,0x01,
			0x01,0x01,0x01,0x03,0x01,0x01,
			0x01,0x01,0x01,0x03,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x03,0x03,0x03,0x03,0x03,0x01,
			0x03,0x01,0x01,0x01,0x01,0x01,
			0x03,0x03,0x03,0x03,0x01,0x01,
			0x01,0x01,0x01,0x01,0x03,0x01,
			0x03,0x03,0x03,0x03,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x03,0x03,0x03,0x01,
			0x03,0x01,0x01,0x01,0x01,0x01,
			0x03,0x03,0x03,0x03,0x01,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x03,0x03,0x03,0x03,0x03,0x01,
			0x01,0x01,0x01,0x01,0x03,0x01,
			0x01,0x01,0x01,0x03,0x01,0x01,
			0x01,0x01,0x01,0x03,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x01,0x03,0x03,0x03,0x03,0x01,
			0x01,0x01,0x01,0x01,0x03,0x01,
			0x03,0x03,0x03,0x03,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x03,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x03,0x01,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x01,0x03,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x03,0x03,0x03,0x03,0x03,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x03,0x03,0x03,0x03,0x03,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x01,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x01,0x03,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x03,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x01,0x01,0x03,0x03,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x03,0x01,0x03,0x03,0x01,0x01,
			0x03,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x03,0x03,0x03,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x03,0x03,0x03,0x03,0x03,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x03,0x03,0x03,0x03,0x01,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x03,0x03,0x03,0x03,0x01,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x03,0x03,0x03,0x03,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x03,0x01,0x01,0x01,0x01,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x03,0x03,0x03,0x03,0x01,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x03,0x03,0x03,0x03,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x03,0x03,0x03,0x03,0x03,0x01,
			0x03,0x01,0x01,0x01,0x01,0x01,
			0x03,0x03,0x03,0x03,0x01,0x01,
			0x03,0x01,0x01,0x01,0x01,0x01,
			0x03,0x03,0x03,0x03,0x03,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x03,0x03,0x03,0x03,0x03,0x01,
			0x03,0x01,0x01,0x01,0x01,0x01,
			0x03,0x03,0x03,0x03,0x01,0x01,
			0x03,0x01,0x01,0x01,0x01,0x01,
			0x03,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x03,0x03,0x03,0x01,
			0x03,0x01,0x01,0x01,0x01,0x01,
			0x03,0x01,0x03,0x03,0x03,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x03,0x03,0x03,0x03,0x03,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x03,0x03,0x03,0x03,0x03,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x03,0x03,0x03,0x03,0x03,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x03,0x03,0x03,0x03,0x03,0x01,
			0x01,0x01,0x01,0x03,0x01,0x01,
			0x01,0x01,0x01,0x03,0x01,0x01,
			0x03,0x01,0x01,0x03,0x01,0x01,
			0x01,0x03,0x03,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x03,0x01,0x01,0x03,0x01,0x01,
			0x03,0x03,0x03,0x01,0x01,0x01,
			0x03,0x01,0x01,0x03,0x01,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x03,0x01,0x01,0x01,0x01,0x01,
			0x03,0x01,0x01,0x01,0x01,0x01,
			0x03,0x01,0x01,0x01,0x01,0x01,
			0x03,0x01,0x01,0x01,0x01,0x01,
			0x03,0x03,0x03,0x03,0x03,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x03,0x03,0x01,0x03,0x03,0x01,
			0x03,0x01,0x03,0x01,0x03,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x03,0x03,0x01,0x01,0x03,0x01,
			0x03,0x01,0x03,0x01,0x03,0x01,
			0x03,0x01,0x01,0x03,0x03,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x03,0x03,0x03,0x03,0x01,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x03,0x03,0x03,0x03,0x01,0x01,
			0x03,0x01,0x01,0x01,0x01,0x01,
			0x03,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x03,0x01,0x01,0x03,0x01,0x01,
			0x01,0x03,0x03,0x01,0x03,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x03,0x03,0x03,0x03,0x01,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x03,0x03,0x03,0x03,0x01,0x01,
			0x03,0x01,0x01,0x03,0x01,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x03,0x03,0x03,0x01,
			0x03,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x01,0x01,0x01,0x01,0x03,0x01,
			0x03,0x03,0x03,0x03,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x03,0x03,0x03,0x03,0x03,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x01,0x03,0x01,0x03,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x03,0x01,0x03,0x01,0x03,0x01,
			0x03,0x01,0x03,0x01,0x03,0x01,
			0x03,0x01,0x03,0x01,0x03,0x01,
			0x01,0x03,0x01,0x03,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x01,0x03,0x01,0x03,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x03,0x01,0x03,0x01,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x01,0x03,0x01,0x03,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x03,0x03,0x03,0x03,0x03,0x01,
			0x01,0x01,0x01,0x03,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x03,0x01,0x01,0x01,0x01,
			0x03,0x03,0x03,0x03,0x03,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x03,0x01,0x01,0x01,
			0x01,0x03,0x01,0x01,0x01,0x01,
			0x01,0x03,0x01,0x01,0x01,0x01,
			0x01,0x03,0x01,0x01,0x01,0x01,
			0x01,0x03,0x03,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x03,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x01,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x01,0x03,0x01,0x01,
			0x01,0x01,0x01,0x01,0x03,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x03,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x03,0x03,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x03,0x01,0x03,0x01,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x03,0x03,0x03,0x03,0x03,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x01,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x03,0x01,0x01,0x03,0x01,0x01,
			0x03,0x01,0x01,0x03,0x01,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x03,0x01,0x01,0x01,0x01,0x01,
			0x03,0x03,0x03,0x01,0x01,0x01,
			0x03,0x01,0x01,0x03,0x01,0x01,
			0x03,0x01,0x01,0x03,0x01,0x01,
			0x03,0x03,0x03,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x03,0x01,0x01,0x01,0x01,0x01,
			0x03,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x03,0x01,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x03,0x01,0x01,0x03,0x01,0x01,
			0x03,0x01,0x01,0x03,0x01,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x03,0x01,0x01,0x01,
			0x03,0x03,0x03,0x03,0x01,0x01,
			0x03,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x03,0x01,0x01,0x01,
			0x03,0x01,0x01,0x03,0x01,0x01,
			0x03,0x03,0x01,0x01,0x01,0x01,
			0x03,0x01,0x01,0x01,0x01,0x01,
			0x03,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x03,0x01,0x01,0x01,
			0x03,0x01,0x01,0x03,0x01,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x01,0x01,0x01,0x03,0x01,0x01,
			0x03,0x03,0x03,0x01,0x01,0x01,
			0x03,0x01,0x01,0x01,0x01,0x01,
			0x03,0x03,0x03,0x01,0x01,0x01,
			0x03,0x01,0x01,0x03,0x01,0x01,
			0x03,0x01,0x01,0x03,0x01,0x01,
			0x03,0x01,0x01,0x03,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x03,0x01,0x03,0x01,0x01,0x01,
			0x01,0x03,0x01,0x01,0x01,0x01,
			0x03,0x01,0x01,0x01,0x01,0x01,
			0x03,0x01,0x03,0x01,0x01,0x01,
			0x03,0x03,0x01,0x01,0x01,0x01,
			0x03,0x01,0x03,0x01,0x01,0x01,
			0x03,0x01,0x01,0x03,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x01,0x01,0x01,0x01,
			0x01,0x03,0x01,0x01,0x01,0x01,
			0x01,0x03,0x01,0x01,0x01,0x01,
			0x01,0x03,0x01,0x01,0x01,0x01,
			0x01,0x03,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x03,0x03,0x01,0x03,0x01,0x01,
			0x03,0x01,0x03,0x01,0x03,0x01,
			0x03,0x01,0x03,0x01,0x03,0x01,
			0x03,0x01,0x03,0x01,0x03,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x03,0x01,0x03,0x01,0x01,0x01,
			0x03,0x03,0x01,0x03,0x01,0x01,
			0x03,0x01,0x01,0x03,0x01,0x01,
			0x03,0x01,0x01,0x03,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x03,0x01,0x01,0x01,
			0x03,0x01,0x01,0x03,0x01,0x01,
			0x03,0x01,0x01,0x03,0x01,0x01,
			0x01,0x03,0x03,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x03,0x03,0x03,0x01,0x01,0x01,
			0x03,0x01,0x01,0x03,0x01,0x01,
			0x03,0x01,0x01,0x03,0x01,0x01,
			0x03,0x03,0x03,0x01,0x01,0x01,
			0x03,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x03,0x01,0x01,0x03,0x01,0x01,
			0x03,0x01,0x01,0x03,0x01,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x01,0x01,0x01,0x03,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x03,0x01,0x03,0x01,0x01,0x01,
			0x03,0x03,0x01,0x03,0x01,0x01,
			0x03,0x01,0x01,0x01,0x01,0x01,
			0x03,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x03,0x03,0x01,0x01,0x01,0x01,
			0x01,0x01,0x03,0x03,0x01,0x01,
			0x03,0x03,0x03,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x03,0x01,0x01,0x01,0x01,0x01,
			0x03,0x03,0x03,0x01,0x01,0x01,
			0x03,0x01,0x01,0x01,0x01,0x01,
			0x03,0x01,0x01,0x03,0x01,0x01,
			0x01,0x03,0x03,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x03,0x01,0x01,0x03,0x01,0x01,
			0x03,0x01,0x01,0x03,0x01,0x01,
			0x03,0x01,0x01,0x03,0x01,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x03,0x01,0x01,0x03,0x01,0x01,
			0x03,0x01,0x01,0x03,0x01,0x01,
			0x03,0x01,0x03,0x01,0x01,0x01,
			0x01,0x03,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x03,0x01,0x01,0x01,0x03,0x01,
			0x03,0x01,0x03,0x01,0x03,0x01,
			0x03,0x01,0x03,0x01,0x03,0x01,
			0x01,0x03,0x01,0x03,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x03,0x03,0x01,0x03,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x03,0x01,0x01,0x01,0x01,
			0x03,0x01,0x03,0x03,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x03,0x01,0x01,0x03,0x01,0x01,
			0x03,0x01,0x01,0x03,0x01,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x01,0x01,0x01,0x03,0x01,0x01,
			0x03,0x03,0x03,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x03,0x03,0x03,0x03,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x03,0x01,0x01,0x01,0x01,
			0x03,0x03,0x03,0x03,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x03,0x01,0x01,0x01,
			0x01,0x03,0x01,0x01,0x01,0x01,
			0x03,0x03,0x01,0x01,0x01,0x01,
			0x01,0x03,0x01,0x01,0x01,0x01,
			0x01,0x03,0x03,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x03,0x01,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x01,0x03,0x03,0x01,0x01,
			0x01,0x01,0x03,0x01,0x01,0x01,
			0x01,0x03,0x03,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x01,0x01,0x01,0x01,
			0x03,0x01,0x03,0x01,0x03,0x01,
			0x01,0x01,0x01,0x03,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x03,0x01,0x03,0x01,0x03,0x01,
			0x03,0x03,0x01,0x03,0x03,0x01,
			0x03,0x01,0x03,0x01,0x03,0x01,
			0x01,0x03,0x03,0x03,0x01,0x01,
			0x01,0x01,0x01,0x01,0x01,0x01
		};
	}
}


#endif // POKITTOTUI_UITILESETS_PUITS_ULTIMATEUTOPIA4_HPP