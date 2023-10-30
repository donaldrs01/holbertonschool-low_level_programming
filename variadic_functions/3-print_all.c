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
	va_list args;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			c = (char) va_arg(args, int);
			printf("%c", c);
		}
		else if (format[i] == 'i')
		{
			num = va_arg(args, int);
			printf("%d", num);
		}
		else if (format[i] == 'f')
		{
			f = (float) va_arg(args, double);
			printf("%f", f);
		}
		else if (format[i] == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", s);
			}
		}

		i++;
	}

	va_end(args);

	printf("\n");
}
