#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - will print whatever it receives regardless of type
 * @format: specifies the type of data type to print
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	int num;
	char c;
	float f;
	char *s;
	int printed = 0;
	va_list args;

	va_start(args, format);

	if (format == NULL)
	{
		return;
	}

	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			c = (char) va_arg(args, int);
			printf("%s%c", (printed ? ", " : ""), c);
			printed = 1;
			/**
			 * inside each switch statement:
			 * includes space and comma only if printed is true
			 */
			break;
		case 'i':
			num = va_arg(args, int);
			printf("%s%d", (printed ? ", " : ""), num);
			printed = 1;
			break;
		case 'f':
			f = (float) va_arg(args, double);
			printf("%s%f", (printed ? ", " : ""), f);
			printed = 1;
			break;
		case 's':
			s = va_arg(args, char *);
			printf("%s%s", (printed ? ", " : ""), (s == NULL ? "(nil)" : s));
			printed = 1;
			break;
		}

		i++;
	}

	va_end(args);

	printf("\n");
}
