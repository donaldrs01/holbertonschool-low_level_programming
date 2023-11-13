#include "main.h"
#include <stdio.h>
/**
 * get_bit - returns value of a bit at given index
 * @n: the number whose bit value is retrieved
 * @index: position of the bit you want to get from 'n'
 * More: 0 index refers to the least significant (rightmost) bit
 *
 * Return: the value of the bit at index 'index' or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
	{
		return (-1); /* error - index out of rnage */
	}

	return ((n >> index) & 1);
	/**
	 * right-shifts n by 'index' bits
	 * moves bit at given index to least significant bit position
	 * performs AND operation with 1
	 * if least sig bit is 1, result is 1
	 * if least sig bit is 0, result is 0
	 * returns either 0 or 1
	 */
