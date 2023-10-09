#include "main.h"
/**
 * _strstr - finds first occurrence of substring 'needle' in 'haystack'
 * @haystack: the string being searched
 * @needle: the substring being searched for
 *
 * Return: pointer to beginning of located substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;
	char *h_temp;
	char *n_temp;

	if (*n == '\0')
	{
		return (h);
	}

	while (*h != '\0')
	{
		h_temp = h;
		n_temp = n;

		while (*n_temp != '\0' && *h_temp == *n_temp)
		{
			h_temp++;
			n_temp++;
		}

		if (*n_temp == '\0')
		{
		return (h);
	}

	h++;
	}

	return (NULL);
}

