#include "main.h"
/**
 * _puts - will print a string
 * @str: the string that is printed out
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
