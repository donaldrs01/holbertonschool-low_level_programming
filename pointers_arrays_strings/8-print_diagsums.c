#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagnoals of a square matrix
 * @a: pointer to the first element of a square matrix
 * @size: integer representing the size of square matrix (rows&columns)
 */
void print_diagsums(int *a, int size)
{
	int sum_primary = 0;
	int sum_secondary = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum_primary += a[i * size + i];
		/**
		 * elements on primary diagonal
		 */
		sum_secondary += a[i * size + (size - 1 - i)];
		/**
		 * prints elements on secondary diagonal
		 */
	}

	printf("Sum of primary diagonal: %d\n", sum_primary);
	printf("Sum of secondary diagonal: %d\n", sum_secondary);
}
