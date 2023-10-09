#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * * @s: the string
 * @accept: pointer to a string that contains valid characters
 *
 * Return: number of bytes in original string that contain bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		char *accept_ptr = accept;

		while (*accept_ptr != '\0' && *accept_ptr != *s)
		{
			accept_ptr++;
		}

		if (*accept_ptr == '\0')
		{
			break;
		}

		count++;
		s++;
	}

	return (count);
}
