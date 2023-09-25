#include "main.h"
#include <stdio.h>
/**
 * _isalpha - checks if a character is part of the alphabet
 * @c: the character to check
 *
 * Return: 1 if c is part of the alphabet, 0 if it is not.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
