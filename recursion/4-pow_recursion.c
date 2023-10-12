#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - will return value of x to the power of y
 * @x: the integer
 * @y: the power at which the integer will be raised
 *
 * Return: -1 if y < 0, otherwise correct value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
/**
 * Multiplies x to itself until y = 0
 */
