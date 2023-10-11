#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - will print the length of a string
 * @s: input string
 *
 * Return: 0 if empty, length of string otherwise
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1) + _strlen_recursion(s + 1);
}
