#include "main.h"
/**
 * _strpbrk - will search a string for any of a set of bytes
 * @s: the string to be searched
 * @accept: acceptable bytes
 *
 * Return: pointer to the byte in s that matches or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *accept_ptr = accept;

		while (*accept_ptr != '\0')
		{
			if (*s == *accept_ptr)
			{
				return (s);
			}
			accept_ptr++;
		}
		s++;
	}

	return (NULL);
}
