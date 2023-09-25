#include "main.h"
#include <stdio.h>
/**
 * _islower - checks if a character is lowercase
 * @c - the character to check
 *
 * Return: 1 if lowercase, 0 is uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
