#include "main.h"
#include <stdio.h>
/**
 * _abs - computers the absolute value of integer 'n'
 * @n: the integer to compute the absolute value of
 *
 * Return: absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
