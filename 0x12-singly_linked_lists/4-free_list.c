#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a list
 * @head: is the pointer to the list
 */
void free_list(list_t *head)
{
	list_t *i;

	while (head)
	{
		i = head;
		head = head->next;
		free(i->str);
		free(i);
	}
}
