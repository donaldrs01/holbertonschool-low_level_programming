#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to a string of binary characters
 *
 * Return: 0 on failure, otherwise the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		result = (result << 1) + (*b - '0');
		/** 
		 * shifts value of result one bit to left 
		 * equivalent of multiplying by 2 in binary
		 * adds integer value of current character
		 */
		b++;
	}

	return (result);
}
