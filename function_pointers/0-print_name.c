#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - will print the name string
 * @name: a string that we want to print
 * @f: a function pointer that points to a function taking a char * argument
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	f(name);
}
