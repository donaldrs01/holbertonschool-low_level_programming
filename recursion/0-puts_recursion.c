#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - will use recursion to print a string
 * @s: the string that we will print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}

	putchar(*s);
	_puts_recursion(s + 1);
}
