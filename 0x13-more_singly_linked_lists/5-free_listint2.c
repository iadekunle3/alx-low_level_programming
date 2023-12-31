#include "lists.h"
/**
 * free_listint2 - frees a list and set head to NULL
 * @head: double pointer to the start of the list
 * Return: as specified
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
