#include "main.h"
/**
 * more_numbers - will print 10x 0-14
 *
 */
void more_numbers(void)
{
	float numbers[] = {0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0, 12.0, 13.0, 14.0};
	int i, k;

	for (i = 0; i < 10; i++) /* loops 10 times for each set of numbers */
	{
		for (k = 0; k <= 14; k++) /* loop through the numbers 1-14 */
		{
			{
				_putchar('0' + (int)numbers[k]);
			}
		}
		_putchar('\n');
	}
}
