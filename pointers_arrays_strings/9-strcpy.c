#include "main.h"
/**
 * _strcopy - will copy the string pointed to by src and places it in buffer pointed to by dest
 * @chardest: the destination 
 * @charsrc: the original string being copied 
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
