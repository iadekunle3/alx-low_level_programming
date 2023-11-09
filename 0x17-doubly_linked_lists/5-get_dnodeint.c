#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list.
 * @head: head of the list
 * @index: index of the node
 * Return: the nth node, or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *ptr = head;

	while (ptr)
	{
		if (i == index)
			return (ptr);
		i++;
		ptr = ptr->next;
	}
	return (NULL);
}

