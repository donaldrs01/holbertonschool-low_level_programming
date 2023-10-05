#include "main.h"
/**
 * reverse_array - will reverse input n amount of elements of an array
 * @n: the number of elements of the array
 * @a: an array of integers
 */
void reverse_array(int *a, int n)
{
int start = 0;
int end = n - 1;
int temp;

while (start < end)
{
	temp = a[start];
	a[start] = a[end];
	a[end] = temp;

	start++;
	end--;
}
}
