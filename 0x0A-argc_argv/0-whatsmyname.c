#include <stdio.h>
/**
 * main - is the function name
 * @argc: is the argument to main
 * @argv: is the argument array
 * Return: as specified
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
