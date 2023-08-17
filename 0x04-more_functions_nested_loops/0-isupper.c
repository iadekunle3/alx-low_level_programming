#include "main.h"

/**
 * _isupper - is the code to check uppercase
 * @c: is the integer used
 * Return: as specified
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
