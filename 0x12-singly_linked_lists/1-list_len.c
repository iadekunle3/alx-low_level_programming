#include "lists.h"
/**
 * list_len - is the function that list element
 * @h: is the pointer to the list
 * Return: as specified
 */
size_t  list_len(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		h = h->next;
		j++;
	}
	return (j);
}
