#include "main.h"
/**
 * print_numbers - will print from 0 to 9
 *
 */
void print_numbers(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		_putchar(digit);
	}
	_putchar('\n');
}