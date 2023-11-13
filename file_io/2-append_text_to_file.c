#include "main.h"
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <stdlib.h>
/**
 * append_text_to_file - appends text to end of a file
 * @filename: name of file that text is added to
 * @text_content: text to be added to end of file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL)
	{
		return (-1);
	}

	file = fopen(filename, "a"); /*opens the file for appending */
	if (file == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		fputs(text_content, file);
	}

	fclose(file);

	return (1);
}




