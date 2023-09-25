#include <stdio.h>
/**
 * main - this will print the lowercase alphabet in reverse
 *
 * Return: it should successfully return a 0.
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
