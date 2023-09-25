#include "lists.h"
/**
 * add_nodeint - adds a new node at the start of list
 * @head: double pointer to the start of the list
 * @n: integer to be included in the new node
 * Return: as specified
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *i;

	i = malloc(sizeof(listint_t));
	if (i == NULL)
		return (NULL);
	i->n = n;
	i->next = *head;
	*head = i;

	return (i);
}
