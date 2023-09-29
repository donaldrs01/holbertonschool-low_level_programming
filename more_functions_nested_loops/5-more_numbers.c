#include "main.h"
/**
 * more_numbers - will print 10x 0-14
 *
 */
void more_numbers(void)
{
	int i, k;

	for (i = 0; i < 10; i++) /* loops 10 times for each set of numbers */
	{
		for (k = 0; k <= 14; k++) /* loop through the numbers 1-14 */
			if (k >= 10)
			{
				_putchar('0' + (k / 10)); /* print the tens diggit */
			}
		{
				_putchar('0' + (k % 10));
			}
		{
		_putchar('\n');
	}
}
