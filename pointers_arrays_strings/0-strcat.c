#include "main.h"
/**
 * _strcat - will combine two strings together
 * @dest: the 'destination' string
 * * @src: the first string that will be fixed to the end
 *
 * Return: a pointer to the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++; /* finds the end of the dest string */
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++; /* this copies from src to dest */
	}
	*dest = '\0';

	return (result);
}
