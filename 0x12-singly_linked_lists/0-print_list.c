#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - prints all elements
 * @h: is the pointer to the list
 * Return: as specified
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0](mil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		nodes++;
		h = h->next;
	}
	return (nodes);
}
