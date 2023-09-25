#include "lists.h"
/**
 * free_listint - frees a list
 * @head: pointer to the start of the list
 */
void free_listint(listint_t *head)
{
	listint_t *i;

	while (head != NULL)
	{
		i = head;
		head = head->next;
		free(i);
	}
}
