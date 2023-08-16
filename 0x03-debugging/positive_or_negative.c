#include "main.h"

/**
 * positive_or_negative - check if a number is +ve or _ve or zero
 * @i: integer
 * Return: (0);
 */

void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is %s\n", i, "negative");
	}
	else if (i > 0)
	{
		printf("%d is %s\n", i, "positive");
	}
	else
	{
		printf("%d is %s\n", i, "zero");
	}
}

