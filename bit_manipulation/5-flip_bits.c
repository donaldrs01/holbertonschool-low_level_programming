#include "main.h"
#include <stdio.h>
/**
 * flip_bits -returns # of bits needed to flip to get from number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: # of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	/**
	 * calculates the XOR of n and m
	 * compares bits of n and m
	 * sets corresponding bit to 1 if different, 0 if same
	 */
	int count = 0;

	while (result != 0)
	{
		result &= (result - 1);
		/*
		 * clears least significant set bit in result
		 */
		count++; /* counts cleared bit as a flipped bit */
	}

	return (count);
}
