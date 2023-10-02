#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, or a positive integer on failure
 */
int main(int argc, char *argv[])
{
	int file1, file2;
	ssize_t bytes;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
       		exit(97);
	}
	file1 = open(argv[1], O_RDONLY);
	if (file1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		close(file1);
		exit(99);
	}
	while ((bytes = read(file1, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(file2, buffer, bytes) != bytes)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			close(file1);
			close(file2);
			exit(99);
		}
	}
	if (bytes == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(file1) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file1);
		exit(100);
	}
	if (close(file2) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file2);
		exit(100);
	}
	return (0);
}

