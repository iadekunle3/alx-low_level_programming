#include "main.h"
/**
 * get_bit - is the function to get bit from given index
 * @n: is the unsigned long int for user input
 * @index: is the position of the input in the array
 * Return: as specified
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);
	return ((n >> index) & 1);
}
