#include "lists.h"
/**
 * print_listint_safe - a safe way to print list
 * @head: is the pointer to the linked list
 * Return: as specified
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	const listint_t *i, *j;

	if (head == NULL)
		exit(98);

	i = head;
	j = head;
	while (i != NULL && j != NULL && j->next != NULL)
	{
		printf("[%p] %d\n", (void *)i, i->n);
		num++;

		i = i->next;
		j = j->next->next;

		if (i == j)
		{
			printf("-> [%p] %d\n", (void *)i, i->n);
			return (num);
		}
	}
	return (num);
}
