#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - is function used to print element in an array
 * @array: contains all the element given
 * @size: is the size of the array element
 * @action: is the pointer of the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
