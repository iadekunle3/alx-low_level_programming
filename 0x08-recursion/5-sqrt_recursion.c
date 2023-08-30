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
	double result = sqrt(n);
	if (result == (int)result)
	{
		return result;
	}
	else
	{
		return (-1);
	}
}
