#include "main.h"
/**
 * flip_bits - is used to flip bits and return no of bits
 * @n: is the first input
 * @m: is the second input
 * Return: as specified
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_val = n ^ m;
	unsigned int flip = 0;

	while (xor_val)
	{
		flip += xor_val & 1;
		xor_val >>= 1;
	}
	return (flip);
}
