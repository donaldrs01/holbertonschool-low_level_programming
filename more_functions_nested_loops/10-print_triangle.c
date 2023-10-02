#include "main.h"
/**
 * print_trinagle - will use # character to print triangle based on variable 'size' 
 * @size: the size of the desired triangle
 */

void print_triangle(int size)
{
	int row, space, hash; 

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (row = 1; row <= size; row++)
	{
		for (space = 0; space < size - row; space++)
		{
			_putchar(' ');
		}
		for (hash = 0; hash < row; hash++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
