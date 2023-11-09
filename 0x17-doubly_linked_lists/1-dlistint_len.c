#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: head of a doubly linked list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t n = 0;

	while (ptr)
	{
		n++;
		ptr = ptr->next;
	}
	return (n);
}
