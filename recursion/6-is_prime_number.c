#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - will determine if input is prime number
 * @n: the inputted value
 * @i: the divisor
 * Return: 1 if prime, otherwise 0
 */
int is_prime_number(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}

	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_number(n, i - 1));
}
