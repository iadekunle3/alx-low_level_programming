#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * find_listint_loop - is used to find loop in a list
 * @head: is the pointer to the list
 * Return: as specified
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *i, *j;

	if (head == NULL)
		return (NULL);

	i = j = head;

	while (i && j && j->next)
	{
		i = i->next;
		j = j->next->next;

		if (i == j)
		{
			i = head;
			while (i != j)
			{
				i = i->next;
				j = j->next;
			}
			return (i);
		}
	}
	return (NULL);
}

