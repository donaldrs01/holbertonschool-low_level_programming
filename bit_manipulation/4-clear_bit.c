#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets value of a bit to '0' at given index value
 * @*n: pointer to number in which bit is set
 * @index: position of the bit to be set in number 'n'
 *
 * Return: 1 on success, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8 - 1)
	{
		return (-1);
	}

	*n = *n & ~(1 << index);
	/**
	 * left-shift results in # that has all bits set to 0
	 * except for the bit at given index, which is set to 1
	 * INVERTS by using the not (~) operator
	 * Flips all bits, so bit at index becomes 0 and others become 1
	 * AND operation performed
	return (1);
}
