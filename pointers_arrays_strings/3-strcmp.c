#include "main.h"
/**
 * _strcmp - will compare two strings passed to the function
 * will return integer based on similarity
 * @s1: the first string
 * @s2: the second string
 * *
 * Return: 0 if equal, - if s1 is less, and + if s1 is greater
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 < *s2)
		{
			return (-1);
		}
		else if (*s1 > *s2)
		{
			return (1);
		}
		s1++;
		s2++;
	}
	return (0);
}
