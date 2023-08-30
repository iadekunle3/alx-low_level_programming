#include "main.h"
#include <math.h>
/**
 * _sqrt - is the function to print sqr
 * @n: is the user input
 * Return: as specified
 */
int _sqrt(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	int result = sqrt(n);
	if (result * result == n)
	{
		return (result);
	}
	else
	{
		return (-1);
	}
}
