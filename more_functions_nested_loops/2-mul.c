#include "main.h"
/**
 * mul - multiplies two integers together
 * @a: the first integer
 * @b: the second integer
 *
 * Return: should return 0
 */

int mul(int a, int b)
{
	int result = 0;

	while (b > 0)
	{
		result += a;
		b--;
	}
	return (0);
}
