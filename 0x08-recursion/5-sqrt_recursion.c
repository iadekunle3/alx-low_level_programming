#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - is the function to print sqr
 * @n: is the user input
 * Return: as specified
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	result = sqrt(n);
	if (result == (int)result)
	{
		return (result);
	}
	else
		return (-1);
}
