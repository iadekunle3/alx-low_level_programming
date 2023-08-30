#include "main.h"
/**
 * _sqrt_recursion - is the function to print sqr
 * @n: is the user input
 * Return: as specified
 */
int _sqrt_recursion(int n)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	return (_sqrt_recursion(n, i + 1))
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion(n, 0));
}
