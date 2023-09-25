#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of list
 * @head: double pointer to the start of the list
 * @n: integer to be included in the new node
 * Return: as specified
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i;
	listint_t *j = *head;

	i = malloc(sizeof(listint_t));
	if (i == NULL)
		return (NULL);
	i->n = n;
	i->next = NULL;

	if (*head == NULL)
	{
		*head = i;
		return (i);
	}
	while (j->next != NULL)
	{
		j = j->next;
	}
	j->next = i;
	return (i);
}
