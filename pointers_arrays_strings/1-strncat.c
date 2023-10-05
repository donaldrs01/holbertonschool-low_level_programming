#include "main.h"
/**
 * _strncat - concatenate two strings but not over 'n' byte limit
 * @dest: the destination string
 * @src: the string being moved
 * @n: the maximum number of bytes to be moved
 * *
 * Return: the pointer to string 'dest'
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest; /* returns pointer to start of fused string once done*/

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--; /* by going down, this establishes the byte maximum */
	}

	*dest = '\0';

	return (result); /* returns pointer to new string */
}

