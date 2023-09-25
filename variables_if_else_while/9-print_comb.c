#include <stdio.h>
/**
 * main - this will print all possible combos of 1-digit numbers
 *
 * Return: it should return a 0 on success.
 */
int main(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');

		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
