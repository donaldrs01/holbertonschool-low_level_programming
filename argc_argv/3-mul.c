#include <stdio.h>
/**
 * main - will multiply two integers
 * @argc: the number of arguments
 * @argv: the names of the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int product = num1 * num2;

	if (argc != 3)
	{
		printf("Error\n");
	}

	printf("%d\n", product);

	return (0);
}


