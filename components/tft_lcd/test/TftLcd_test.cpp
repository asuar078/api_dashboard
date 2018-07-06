/*
 * TftLcd_test.cpp
 *
 *  Created on: Jul 5, 2018
 *      Author: bigbywolf
 */

#include "TftLcd.hpp"
#include "unity.h"

TEST_CASE("returns_two", "[Tft_LCD]")
{
        // Add test here
		TftLcd lcd;

		TEST_ASSERT(lcd.returnsTwo() == 2);
}
