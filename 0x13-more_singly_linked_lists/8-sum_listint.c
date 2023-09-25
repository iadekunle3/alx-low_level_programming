#include "lists.h"
/**
 * sum_listint - returns the sum of all then n of a list
 * @head: pointer to the start of the list
 * Return: as specified
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
