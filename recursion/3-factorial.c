#include "main.h"
#include <stdio.h>
/**
 * factorial - will return the factorial of n
 * @n: the input number
 *
 * Return: -1 if error, the correct answer otherwise
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0 || n == 1)
	{
		return (1);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}
