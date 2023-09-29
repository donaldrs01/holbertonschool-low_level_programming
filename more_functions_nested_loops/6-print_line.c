#include "main.h"
/**
 * print_line - should draw a straight line with __ characters
 * @n: the number of times the character _ is printed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++) /* this is a loop counter */
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
