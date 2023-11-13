#include "main.h"
#include <stdio.h>
/**
 * set_bit - sets the value of a bit to '1' at given index
 * @n: pointer to number in which bit is set
 * @index: position of the bit to set in number 'n'
 *
 * Return: 1 on success, -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long it) * 8 - 1)
	{
		return (-1);
	}

	*n = *n | (1 << index);
	return (1);
	/**
	 * left-shifts 1 by 'index' positions 
	 * creates binary number where all bits are 0
	 * EXCEPT for index position, where it is 1
	 * after doing this, does bitwise OR operation 
	 * compares each bit of n to # created by shift
	 * if either # is 1, resulting bit is 1
	 * sets the bit at index position to 1
	 */
}
