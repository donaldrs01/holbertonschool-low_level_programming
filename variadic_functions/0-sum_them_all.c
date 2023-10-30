#include "main.h"
#include <stdarg.h>
/**
 * sum_them_all - will return the sum of all arguments
 * @n: the first value
 * ...: the remaining values to be added together
 *
 * Return: 0 if n == 0, otherwise the total sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	va_list args; /* holds info about variable arguments */
	int num;

	if (n == 0)
	{
		return (0);
	}

	sum = 0;
	va_start(args, n);

	for (unsigned int i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		sum += num;
	}

	va_end(args);

	return (sum);
}

