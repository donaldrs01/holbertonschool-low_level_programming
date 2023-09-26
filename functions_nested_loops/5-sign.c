#include "main.h"
#include <stdio.h>
/**
 * print_sign - prints the sign of the number 
 * @n: the number to check
 *
 * Return: + if n is positive, 0 if zero, - if n is negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0)'
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
