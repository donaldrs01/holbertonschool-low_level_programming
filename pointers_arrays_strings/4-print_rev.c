#include "main.h"
/**
 * print_rev - will print a string in reverse (followed by new line)
 * @s: the string inputted
 */
void print_rev(char *s)
{
	int length = 0; int i;

	while (s[length] != '\0')
	{
		length++;
	}

	for (int i = length -1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}

