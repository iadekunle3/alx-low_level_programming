#include "lists.h"
/**
 * listint_len - returns the number of element in a list
 * @h: pointer to the list
 * Return: as specified
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *i;
	size_t j = 0;

	i = h;

	while (i != NULL)
	{
		i = i->next;
		j++;
	}
	return (j);
}
