#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * main - is the function to collect arguement
 * @argc: is the arguement count
 * @argv: is the arguement vector
 * Return: as specified
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *ptr;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	for (ptr = argv[1]; *ptr; ptr++)
		if (!isdigit(*ptr))
		{
			printf("Error\n");
			return (98);
		}
	for (ptr = argv[2]; *ptr; ptr++)
		if (!isdigit(*ptr))
		{
			printf("Error\n");
			return (98);
		}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2];
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
