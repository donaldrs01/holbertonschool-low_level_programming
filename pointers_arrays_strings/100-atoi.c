#include "main.h"
#include <limits.h>
/**
 * _atoi - converts a string to an integer
 * @s: the pointer to a string
 *
 * Return: 0 if no numbers in string, otherwise return the string
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s == ' ' || *s == '\t')
	{
		s++;
	}

	if (*s == '-')
	{
		sign = -1;
		s++;
	}

	else if (*s == '+')
	{
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		if (result > (INT_MAX - (*s - '0')) / 10)
		{
			if (sign == 1)
			{
				return (INT_MAX);
			}
			else
			{
				return (INT_MIN);
			}
		}

		result = result * 10 + (*s - '0');
		s++;
	}

	return (result * sign);
}
