#include "main.h"
/**
 * _memset - will fill the first 'n' bytes of memory area
 * @s: a pointer to the area of memory to be filled
 * @b: constant byte v
 * @n: the number of bytes of memory to be filled
 *
 * Return: a pointer to memory area 's'
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	{
		*ptr++ = b;
	}

	return (s);
}
