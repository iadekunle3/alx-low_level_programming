#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - is the function to check memory address
 * @b: is the integer argument used
 * Return: as specified
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
