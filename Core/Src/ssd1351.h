/*
 * ssd1351.h
 *
 *  Created on: Nov 18, 2023
 *      Author: Emil_
 */

#ifndef SRC_SSD1351_H_
#define SRC_SSD1351_H_

#include "stm32f7xx_hal.h"

typedef struct ssd1351 {
	SPI_HandleTypeDef *hspi;
	GPIO_TypeDef *CS_port;
	GPIO_TypeDef *DC_port;
	GPIO_TypeDef *RES_port;
	uint16_t CS_pin;
	uint16_t DC_pin;
	uint16_t RES_pin;
	uint16_t width;
	uint16_t height;
} ssd1351_t;

ssd1351_t ssd1351_init(
		SPI_HandleTypeDef *hspi,
		GPIO_TypeDef *CS_port,
		uint16_t CS_pin,
		GPIO_TypeDef *DC_port,
		uint16_t DC_pin,
		GPIO_TypeDef *RES_port,
		uint16_t RES_pin,
		uint16_t width,
		uint16_t height);


void ssd1351_fillrect(
		ssd1351_t *screen,
		int16_t x, int16_t y,
		int16_t width, int16_t height,
		uint16_t color);



#endif /* SRC_SSD1351_H_ */
