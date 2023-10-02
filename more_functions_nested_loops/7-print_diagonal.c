#include "main.h"
/**
 * print_diagonal - will draw a diagonal line using the \ character
 * @n: represents the number of \ characters
 */
void print_diagonal(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
