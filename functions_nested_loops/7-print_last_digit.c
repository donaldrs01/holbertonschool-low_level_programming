#include "main.h"
#include <stdio.h>
#include <limits.h>
/**
 * print_last_digit - will print the last digit of a number
 * @n - the integer that is being evaluted
 * 
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n == INT_MIN)
	{
		last_digit = 8;
	}

	else
	{
	if (n < 0)
		n = -n;
	last_digit = n % 10;
	_putchar('0' + last_digit);
	return (last_digit);
}
