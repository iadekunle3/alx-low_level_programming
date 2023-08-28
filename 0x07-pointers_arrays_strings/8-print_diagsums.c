#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - is the function to print diagonal
 * @a: is the string value
 * @size: is the size of an string
 *
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		sum2 += a[size - i - 1];
		a += size;
	}
	printf("%d\n, ", sum1);
	printf("%d\n", sum2);
}
