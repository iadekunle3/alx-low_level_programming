#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - is the function that takes int
 * @array: is the contains the element
 * @size: is the size of the array
 * @cmp: is the function pointer
 * Return: as specified
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
