#include "main.h"

/**
 * print_last_digit - is the starting point
 * @n: is the integer value
 * Return: as specified
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
	n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
