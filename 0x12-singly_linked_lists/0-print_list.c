#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all elements
 * @h: is the pointer to the list
 * Return: as specified
 */
size_t print_list(const list_t *h)
{
	size_t nodes;
       
	nodes = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
