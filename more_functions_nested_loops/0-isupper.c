#include "main.h"
/**
 * _isupper - tells whether a character is upper or lower case
 * @c: the character being checked for case
 * Return: 1 on upper case, 0 on lower case
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
