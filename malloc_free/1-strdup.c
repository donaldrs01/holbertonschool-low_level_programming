#include "main.h"
#include <stlib.h>
#include <stdio.h>
/**
 * _strdup - returns pointer to new space in memory contains copy of input
 * @str: string to be copied into memory
 *
 * Return: NULL if str = NULL or if not enough memory, otherwise copied string
 */
char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}
	duplicate = (char *)malloc(strlen(str) + 1);
	/* converts return value of malloc to a char * pointer*/
	/* malloc returns a void * pointer by default */
	if (duplicate == NULL)
	{
		return (NULL);
	}
	strcpy(duplicate, str);
	return (duplicate);
}

