#include "main.h"
/**
 * _strchr - will locate character 'c' in string 's'
 * @s: the string we are picking a letter from
 * @c: the character we are searching for in string
 *
 * Return: pointer to the first occurrence of 'c' or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}
