#include "main.h"
#include <stdio.h>
/**
 * main - will print the name of the program (contained in first index spot)
 * @argc: the number of arguments
 * @argv: the names of the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
