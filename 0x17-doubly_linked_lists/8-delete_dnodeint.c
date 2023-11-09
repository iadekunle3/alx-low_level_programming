#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t linked list.
 * @head: double pointer to the head of the list
 * @index: index of the node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *ptr = *head;

	while (ptr && i < index)
	{
		ptr = ptr->next;
		i++;
	}

	if (ptr == NULL && i < index)
		return (-1);

	if (index == 0)
		*head = ptr->next;
	else
	{
		ptr->prev->next = ptr->next;
		if (ptr->next != NULL)
			ptr->next->prev = ptr->prev;
	}

	free(ptr);
	return (1);
}

