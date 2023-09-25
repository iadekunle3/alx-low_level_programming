#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of linked list
 * @head: is the pointer to the start of the list
 * @index: index of the code start at 0
 * Return: as specified
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
