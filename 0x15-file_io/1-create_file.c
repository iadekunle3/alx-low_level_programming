#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * create_file - is the function to create file
 * @filename: is the pointer to the file
 * @text_content: is the pointer to the file text content
 * Return: as specified
 */
int create_file(const char *filename, char *text_content)
{
	int i;
	ssize_t write_text;

	if (filename == NULL)
		return (-1);

	i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (i == -1)
		return (-1);
	if (text_content != NULL)
	{
		write_text = write(i, text_content, strlen(text_content));
		if (write_text == -1)
		{
			close(i);
			return (-1);
		}
	}

	close(i);
	return (1);
}

