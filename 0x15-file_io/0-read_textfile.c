#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 * read_textfile - is used to read a text file content
 * @filename: is the pointer to the file
 * @letters: is the content of the file to be read
 * Return: as specified
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	ssize_t read_text, write_text;
	char *buffer;

	if (filename == NULL)
		return (0);

	i = open(filename, O_RDONLY);
	if (i == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(i);
		return (0);
	}

	read_text = read(i, buffer, letters);
	if (read_text == -1)
	{
		free(buffer);
		close(i);
		return (0);
	}

	write_text = write(STDOUT_FILENO, buffer, read_text);
	if (write_text == -1 || write_text != read_text)
	{
		free(buffer);
		close(i);
		return (0);
	}

	free(buffer);
	close(i);

	return (write_text);
}

