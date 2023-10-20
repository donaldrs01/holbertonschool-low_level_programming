#include <stdio.h>
/**
 * main - will print the name of the file the function was compiled from
 *
 * Return: 0
 */
int main(void)
{
	printf("%s\n", _FILE_);
	return (0);
}
