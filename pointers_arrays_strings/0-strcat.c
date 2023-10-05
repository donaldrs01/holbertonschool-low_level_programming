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
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (result);
}
