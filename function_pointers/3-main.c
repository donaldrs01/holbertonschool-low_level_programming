#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int num1;
	char *operator;
	int num2;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	int (*op_func)(int, int) = get_op_func(operator);

	if (op_func == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((strcmp(operator, "/") == 0 || strcmp(operator, "%") == 0) && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = op_func(num1, num2);
	printf("%d\n", result);

	return (0);
}

