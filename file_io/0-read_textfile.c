#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <sys/types.h>
/**
 * read_textfile - reads a text file and prints it to st-o
 * @filename: the name of the file to open and read
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters it could read/print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *storage = malloc((letters + 1) * sizeof(char));
	/* stores characters read from file */
	ssize_t charsread = 0;
	/* stores # of characters read from file using 'fread' */

	if (storage == NULL)
	{
		return (-1);
	}

	if (filename == NULL)
	{
		free(storage);
		return (0);
	}

	file = fopen(filename, "r"); /* opens file in read mode */
	if (file == NULL)
	{
		free(storage);
		return (0);
	}

	charsread = fread(storage, sizeof(char), letters, file);

	if (charsread <= 0)
	{
		fclose(file);
		free(storage);
		return (0);
	}

	storage[charsread] = '\0'; /* null terminator at end of array */
	printf("%s", storage);

	fclose(file);
	free(storage);
	return (charsread);
}

