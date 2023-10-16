#include <stdio.h>
#include <stdlib.h>
/**
 * main - will add two positive numbers passed through as arguments
 * @argc: the number of arguments
 * @argv: the names of the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;
	int number;
	char *endptr;

	if (argc == 1)
	{
		printf("0\n");
	}

	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			number = strtol(argv[i], &endptr, 10);

			if (*endptr != '\0' || number <= 0)
			{
				printf("Error\n");

				return (1);
			}

			sum += number;
		}
		printf("%d\n", sum);
	}

	return (0);
}

