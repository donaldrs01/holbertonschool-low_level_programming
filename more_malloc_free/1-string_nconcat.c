#include <stdlib.h>
#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * string_nconcat - will concatenate two strings
 * @s1: the first string
 * @s2: the second string which will be added to end of first
 * @n: the first 'n' bytes of s2
 *
 * Return: NULL on failure, otherwise returned pointer to new memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1;
	size_t len2;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}

	result = malloc((len1 + n + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}

	strcpy(result, s1);
	strncat(result, s2, n);

	return (result);
}
