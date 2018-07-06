/*
 * TftLcd.cpp
 *
 *  Created on: Jul 5, 2018
 *      Author: bigbywolf
 */

#include "TftLcd.hpp"
#include "esp_log.h"
#include "sdkconfig.h"

static char tag[]="tft_lcd";

TftLcd::TftLcd() {
	// TODO Auto-generated constructor stub

}

TftLcd::~TftLcd() {
	// TODO Auto-generated destructor stub
}

void TftLcd::sayHello(void){
	ESP_LOGI(tag, "hello from lcd");
}

int TftLcd::returnsTwo(void){
	return 2;
}

