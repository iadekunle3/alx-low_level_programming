#include "main.h"
#include <stdio.h>
/**
 * reverse_array - is the reverse function
 * @a: is the first string
 * @n: is the second string used
 *
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
