#include "main.h"
#include <stdio.h>

/**
 *positive_or_negative - Determine if a number is +ve or _ve or zero
 *@i: integer
 *Return: (0);
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

