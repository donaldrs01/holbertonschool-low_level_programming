#include "3-calc.h"
#include <stddef.h>
#include <string.h>
/**
 * get_op_func - selects the correct function to perform operation
 * @s: the operator passed as argument
 *
 * Return: pointer to the function that corresponds to given operator
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}

