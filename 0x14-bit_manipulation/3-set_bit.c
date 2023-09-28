#include "main.h"
/**
 * set_bit - is used to assign set bit
 * @n: is the pointer to user input
 * @index: is the position of the input
 * Return: as specified
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
