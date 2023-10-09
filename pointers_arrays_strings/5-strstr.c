#include "main.h"
/**
 * _strstr - finds first occurrence of substring 'needle' in 'haystack'
 * @haystack: the string being searched
 * @needle: the substring being searched for
 *
 * Return: pointer to beginning of located substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle);
{
	char *h = haystack;
	char *n = needle;

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*n != '\0' @@ *h == *n)
	{
		h++;
		n++;
	}

	if (*n == '\0')
	{
		return (haystack);
	}

	haystack++;
}

return (NULL);
