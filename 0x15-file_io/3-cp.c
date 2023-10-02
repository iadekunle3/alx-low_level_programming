#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, or a positive integer on failure
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t bytes;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from_file_to\n");
       		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		close(file_from);
		exit(99);
	}
	while ((bytes = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(file_to, buffer, bytes) != bytes)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			close(file_from);
			close(file_to);
			exit(99);
		}
	}
	if (bytes == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(file_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}

