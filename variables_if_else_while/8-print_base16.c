#include <stdio.h>
/**
 * main - this will print all base 16 numbers in lowercase
 *
 * Return: it should return the number 0 on success.
 */
int main(void)
{
	char c;

	for (c = '0'; c <= 'f'; c++)
	{
		if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f'))
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
