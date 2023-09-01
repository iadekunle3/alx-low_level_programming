#include "main.h"

/**
 * _islower - is the main function
 * @i: is the integer used
 * Description: Checking the lowercase
 * Return: As specified
 */
int _islower(int i)
{
	if (i >= 'a' && i <= 'z')
		return (1);
	else
		return (0);
}
