#include "main.h"
/**
 * factorial - is the function name
 * @n: is the user input
 * Return: as specified
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
