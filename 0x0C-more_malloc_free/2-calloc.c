#include "main.h"
#include <stdlib.h>
/**
 * _calloc - is the function to allocate memory to array
 * @nmemb: is the array of each bytes
 * @size: is the bytes for the allocated memory
 * Return: as specified
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
		return (NULL);
	return (calloc(nmemb, size));
}
