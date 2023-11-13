#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

void print_error_message(const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
}

int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	int fd_from = open(file_from, 0_RDONLY);
	/* stores file descriptor of file being copied from */
	int fd_to = open (file_to, 0_WRONLY | 0_CREAT | 0_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read; /* stores # of bytes read from fd_from descriptor */
	ssize_t bytes_written;


