#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: double pointer to the start of the list
 * Return: as specified
 */
int pop_listint(listint_t **head)
{
	listint_t *i;
	int n;

	if (*head == NULL)
		return (0);
	i = *head;
	n = i->n;
	*head = i->next;
	free(i);

	return (n);
}
