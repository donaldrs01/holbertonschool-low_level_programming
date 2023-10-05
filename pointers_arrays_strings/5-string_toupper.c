#include "main.h"
/**
 * string_toupper - will change all lowercase letters of a string to uppercase
 * @str: whatever string is inputted
 *
 * Return: the original string in all uppercase
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 'a' + 'A';
		}
		ptr++;
	}

	return (str);
}
