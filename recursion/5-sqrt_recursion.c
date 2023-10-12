#include "main.h"
/**
 * _sqrt_recursion - will return the natural square root of n
 * @n: the inputted number
 *
 * Return: -1 if not valid, otherwise the square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}

	if (n < 0)
	{
		return (-1);
	}

	return ((n / 2 + n / (2 * _sqrt_recursion(n / 2))) / 2);
}
