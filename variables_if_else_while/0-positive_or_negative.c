#include <stdio.h>

#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - description for main
 *
 * Description - tells if a number is positive or negative.
 *
 * Return: value should be 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
printf("%d is ", n);
if (n > 0)
{
	printf("positive\n");
}
else if (n == 0)
{
printf("zero\n");
}
else
{
printf("negative\n");
}
/* your code goes there */
return (0);
}
