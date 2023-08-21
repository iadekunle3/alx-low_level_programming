#include "main.h"
/**
 * puts_half - prints the remianing of a string
 *
 * @str: the string input
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int half, k;

	while (str[len] != '\0')
	{
		len++;
	}

	half = (len - 1) / 2;

	for (k = (half + 1); k < len; k++)
	{
		_putchar(str[k]);
	}

	_putchar('\n');
}
