#include "main.h"
#include <math.h>
/**
 * _pow_recursion - is the function to the power
 * @x: is the first integer
 * @y: is the power value
 * Return: as specified
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	return (pow(x, y));
}
