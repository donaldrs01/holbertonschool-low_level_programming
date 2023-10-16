#include <stdio.h>
/**
 * main - prints the number of arguments passed into program
 * @argc: the number of arguments
 * @argv: the names of the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int numArgs = argc - 1;
	void(*argv);

	printf("%d\n", numArgs);

	return (0);
}
