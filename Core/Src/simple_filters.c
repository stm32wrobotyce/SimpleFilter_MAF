/*
 * simple_filters.c
 *
 *  Created on: Apr 12, 2023
 *      Author: piotr
 */

#include "main.h"
#include "simple_filters.h"

circular_buffer_t buffer;

static int32_t average(int32_t *array, uint32_t size);

void filter_moving_average_init(void)
{
	circular_buffer_init(&buffer);
}

int32_t filter_moving_average(int32_t new_data)
{
   int32_t out = 0;

   circular_buffer_push(&buffer, new_data);
   out = average(buffer.data, buffer.size);

   return out;
}

static int32_t average(int32_t *array, uint32_t size)
{
	int32_t sum = 0;

	for (uint32_t i = 0; i < size; i++)
	{
	  sum += array[i];
	}

	return (sum/size);
}
