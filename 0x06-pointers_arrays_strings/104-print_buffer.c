#include <stdio.h>
#include "main.h"
/**
 * print_buffer - is the function for buffer
 * @b: is the first character
 * @size: is the size of the buffer
 *
 */
void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
		if (i + j < size)
		printf("%02x", b[i + j]);
		else
		printf("  ");

		if (j % 2)
		putchar(' ');
		}

		for (j = 0; j < 10; j++)
		{
		if (i + j < size && b[i + j] >= ' ' && b[i + j] <= '~')
		putchar(b[i + j]);
		else
		putchar('.');
		}

		putchar('\n');
	}

	if (size <= 0)
	putchar('\n');
}

