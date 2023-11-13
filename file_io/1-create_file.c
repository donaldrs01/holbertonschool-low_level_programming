#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <sys/stat.h>
/** 
 * create_file - creates a file with various specs
 * @filename: name of file to be created
 * @text_content: NULL terminated string to write in file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL)
	{
		return (-1);
	}

	file = fopen(filename, "w"); /* creates new file for writing */
	if (file == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		fputs(text_content, file);
		/**
		 * takes two arguments:
		 * string that contains characters to be written
		 * pointer to file where characters are written
		 */
	}

	fclose(file);

	if (chmod(filename, S_IRUSR | S_IWUSR) == -1)
		/* sets read and write permission for owner */
	{
		return (-1);
	}

	return (1);
}


