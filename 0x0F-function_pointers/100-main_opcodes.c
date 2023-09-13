#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of this function
 * @argc: The number of command-line arguments
 * @argv: The command-line arguments
 *
 * Return: 0 if successful, 1 if program does not receive the correct number of
 * arguments, or 2 if the number of bytes is negative
 */
int main(int argc, char *argv[])
{
	int i, bytes;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		printf("%02hhx", ptr[i]);
	if (i < bytes - 1)
		printf(" ");
	else
		printf("\n");
	}

	return (0);
}
