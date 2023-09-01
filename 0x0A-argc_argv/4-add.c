#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - is the function name
 * @argc: is the arguement to print sums
 * @argv: is the array arguement
 * Return: as specified
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
	char *arg = argv[i];

	while (*arg)
	{
		if (!isdigit(*arg))
		{
			printf("Error\n");
			return (1);
		}
		arg++;
	}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}

