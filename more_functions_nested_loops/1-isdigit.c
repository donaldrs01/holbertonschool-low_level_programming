#include "main.h"
/**
 * _isdigit - function that tells us if character is a digit (between 1-9) 
 * @c - the character 
 *
 * Return: 1 if digit, 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
