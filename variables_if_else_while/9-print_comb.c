#include <stdio.h>
/**
 * main - this will print all possible combos of 1-digit numbers
 *
 * Return: it should return a 0 on success.
 */
int main(void)
{
	int i = 0;
	int j = i + 1;
	
	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(',');
			putchar(' '); 
			putchar(j + '0');
		}
	}
	putchar ('\n');
	return (0);
}
