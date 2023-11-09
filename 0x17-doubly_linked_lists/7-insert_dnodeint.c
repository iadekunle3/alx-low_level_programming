#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: double pointer to the head of the list
 * @idx: index of the node
 * @n: data for the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node, *ptr = *h;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	while (ptr && i < idx - 1)
	{
		ptr = ptr->next;
		i++;
	}

	if (ptr == NULL && i < idx - 1)
	{
		free(new_node);
		return (NULL);
	}

	new_node->prev = ptr;
	new_node->next = ptr->next;
	if (ptr->next != NULL)
		ptr->next->prev = new_node;
	ptr->next = new_node;

	return (new_node);
}
