#include "main.h"
#include <stdio.h>
/**
 * print_binary - function that prints binary representation of #
 * @n: the number that will be printed in binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
		/**
		 * recursive function call with 'n' right shifted
		 * equivalent of dividing 'n' by 2
		 */
	}
	putchar((n & 1) ? '1' : '0');
	/**
	 * uses bitwise and operation
	 * checks last bit of n - if n is 1, result is 1
	 * if last bit of n is 0, result is 0
	 * ternary operation checks if (n & 1) is true (prints 1)
	 * if (n & 1) is not true, prints 0
	 */
}
