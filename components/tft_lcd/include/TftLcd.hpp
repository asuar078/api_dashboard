/*
 * TftLcd.hpp
 *
 *  Created on: Jul 5, 2018
 *      Author: bigbywolf
 */

#ifndef COMPONENTS_TFT_LCD_SRC_TFTLCD_HPP_
#define COMPONENTS_TFT_LCD_SRC_TFTLCD_HPP_

class TftLcd {
public:
	TftLcd();
	virtual ~TftLcd();
	void sayHello(void);

	int returnsTwo(void);
};

#endif /* COMPONENTS_TFT_LCD_SRC_TFTLCD_HPP_ */
