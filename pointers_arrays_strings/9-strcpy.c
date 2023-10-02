#include "main.h"
/**
 * _strcpy - will copy the string pointed to by src
 * and places it in buffer pointed to by dest
 * @dest: the destination
 * @src: the original string being copied
 *
 * Return: will return the pointer to 'dest' 
 */
char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (original_dest);
}
