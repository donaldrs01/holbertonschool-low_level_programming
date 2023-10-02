#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: the inputted string
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
		/* This is the syntax for going up by 2 */

		if (str[i] != '\0')
		{
			_putchar(str[i]);
			i += 2;
		}
		else
		{
			break;
		}

	}
_putchar ('\n');
}
