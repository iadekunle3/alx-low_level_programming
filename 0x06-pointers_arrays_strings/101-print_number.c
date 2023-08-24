#include "main.h"
#include <stdio.h>
/**
 * print_number - is the functionto print int
 * @n: is the integer value
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	if (num / 10)
	{
		print_number(num / 10);
		_putchar((num % 10) + '0');
	}
}
