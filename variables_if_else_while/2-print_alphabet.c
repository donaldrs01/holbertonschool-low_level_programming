#include <stdio.h>
/**
 * main - this should print out lowercase letters a-z.
 *
 * Return: value should be 0.
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
