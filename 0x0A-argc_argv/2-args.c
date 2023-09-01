#include <stdio.h>
/**
 * main - is the arguement name
 * @argc: is the arguement that accept command
 * @argc: is the array
 * Return: as specified
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
