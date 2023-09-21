#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
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
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		nodes++;
	}
	return (nodes);
}
