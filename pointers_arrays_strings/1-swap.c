#include "main.h"
/**
 * swap_int - will swap the value of two integers
 * @a: the value of one integer
 * @b: the value of the second  integer
 */
void swap_int (int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
