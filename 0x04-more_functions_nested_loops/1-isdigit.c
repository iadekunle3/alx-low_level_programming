#include "main.h"

/**
 * _isdigit - is the main function
 * @c: is the integer used
 * Return: as specified
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
