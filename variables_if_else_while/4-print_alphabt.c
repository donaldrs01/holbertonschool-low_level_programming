#include <stdio.h>
/**
 * main - will print all letters except for q and e
 *
 * Return: will successfully return 0 as value.
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');
	return (0);
}

