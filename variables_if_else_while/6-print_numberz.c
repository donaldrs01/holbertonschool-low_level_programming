#include <stdio.h>
/**
 * main - This prints single digit numbres, but only the putchar function.
 *
 * Return: it should return a 0.
 */
int main(void)
{
	int i = 0;

	for (; i <= 9; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
