#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - will print a string in reverse
 * @s: the string to be printed
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
	/**
	 * This works because of the stack.
	 * When string reaches end, it prints back in reverse order.
	 * Top of the stack is the most recent character (at end of string).
	 */
}
