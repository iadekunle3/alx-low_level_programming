#include "main.h"
/**
 * binary_to_unit - is the function used to convert binary to unit
 * @b: is the pointer to the binary
 * Return: as specified
 */
void binary_to_unit(unsigned long int b)
{
	if (b > 1)
		binary_to_unit(b >> 1);
	_putchar((b & 1) + '0');
}
