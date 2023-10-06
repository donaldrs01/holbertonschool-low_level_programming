#include "main.h"
/**
 * *leet - will encode a string into leet speak
 * @*str: input string
 *
 * Return: leet string
 */
char *leet(char *str)
{
	char *ptr = str;
	char leetChars[] = "aAeEoOtTlL";
	char leetReplacements[] = "4433770011";
	int i;

	while (*ptr != '\0')
	{
		char c = *ptr;
		i = 0;

		while (leetChars[i] != '\0')
		{
			if (c == leetChars[i])
			{
				*ptr = leetReplacements[i];
				break;
			}
			i++;
		}

		ptr++;
	}

	return (str);
}





