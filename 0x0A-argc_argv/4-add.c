#include <stdio.h>
#include <stdlib.h>
/**
 * main - is the function name
 * @argc: is the arguement to main
 * @argv: is the array
 * Return: as specified
 */
int main(int argc, char *argv[])
{
	int num1, num2, sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	sum = num1 + num2;
	
	printf("%d\n", sum);

	return (0);
}
