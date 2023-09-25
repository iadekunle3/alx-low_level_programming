#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the list
 * @Return: as specified.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *i;
	size_t j = 0;

	i = h;

	while (i != NULL)
	{
		printf("%d\n",i->n);
		i = i->next;
		j++;
	}
	return (j);
}
