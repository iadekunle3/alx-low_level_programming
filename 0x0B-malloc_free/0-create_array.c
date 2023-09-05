#include "main.h"
#include <stdlib.h>
/**
 * *create_array - is the function name
 * @size: is the array size
 * @c: is the user input
 * Return: as specified
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == o)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
