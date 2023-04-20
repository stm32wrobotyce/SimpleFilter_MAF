/*
 * filter.h
 *
 *  Created on: Apr 12, 2023
 *      Author: piotr
 */

#ifndef INC_SIMPLE_FILTERS_H_
#define INC_SIMPLE_FILTERS_H_

#include "main.h"
#include "circural_buffer.h"

void filter_moving_average_init(void);
int32_t filter_moving_average(int32_t new_data);

#endif /* INC_SIMPLE_FILTERS_H_ */
