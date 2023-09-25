#include <stdio.h> 
/**
 * main - this will print out a string of letters
 *
 * Return: value will return as 0.
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z' )
	{
		putchar(letter);
		letter++;
	}
	letter = 'A';

	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
