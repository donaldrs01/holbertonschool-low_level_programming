#include "main.h"
/**
 * _strncpy - should copy the content of a string
 * @dest: where the string is copied to
 * @src: the string that is copied
 * @n: the maximum number of bytes to copy
 *
 * Return: pointer to the string destination
 */
char *_strncpy(char *dest, char *src, int n)
{
char *result = dest;

while (*src != '\0' && n > 0)
{
	*dest = *src;
	src++;
	dest++;
	n--;
}

while (n > 0)
{
	*dest = '\0';
	dest++;
	n--;
}

return (result);
}
