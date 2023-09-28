#include "main.h"
/**
 * binary_to_unit - is used to convert binary to unsigned int
 * @b: is the pointer
 * Return: as specified
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int j, span;

	if (!b)
		return (0);

	for (span = 0; b[span] != '\0'; span++)
	{
		if (b[span] < '0' || b[span] > '1')
			return (0);
	}

	for (j = 0; j < span; j++)
	{
		num <<= 1;
		if (b[j] == '1')
			num += 1;
	}

	return (num);
}

