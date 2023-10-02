#include "main.h"
/**
 * _strlen - will return the length of a string
 * @s: the string
 *
 * Return: the number of characters in the string 
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
