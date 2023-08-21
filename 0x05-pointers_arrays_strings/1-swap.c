#include "main.h"
/**
 * swap_int - is the function to swap int
 * @a: is the first integer
 * @b: is the second integer
 */
void swap_int(int *a, int *b)
{
	int alph = *a;
	*a = *b;
	*b = alph;
}
