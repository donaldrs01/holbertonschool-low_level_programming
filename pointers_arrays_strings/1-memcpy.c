#include "main.h"
/**
 * _memcpy - copies 'n' bytes from memory area src to destination
 * @dest: the destination for copied bytes
 * @src: the memory area we are copying from
 * @n: the amount of bytes to be copied
 * *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_ptr = dest;
	char *src_ptr = src;

	while (n--)
	{
		*dest_ptr++ = *src_ptr++;
	}

	return (dest);
}
