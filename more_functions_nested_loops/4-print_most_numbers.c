#include "main.h"
/**
 * print_most_numbers - will print from 0-9, but not 2 or 4.
 *
 */
void print_most_numbers(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		if (digit != '2' && digit != '4')
		{
			_putchar(digit);
		}
	}
	_putchar('\n');
}
