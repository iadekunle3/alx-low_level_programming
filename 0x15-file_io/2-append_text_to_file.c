#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * append_text_to_file - is used to add text to a file
 * @filename: is the pointer to the file
 * @text_content: is the pointer to the file text content
 * Return: as specified
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i;
	ssize_t write_text;

	if (filename == NULL)
		return (-1);

	i = open(filename, O_WRONLY | O_APPEND);
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

