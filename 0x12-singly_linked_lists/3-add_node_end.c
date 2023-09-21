#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds new node at the end of list
 * @head: is the double pointer
 * @str: is the string value
 * Return: as specified
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *i;
	list_t *j = *head;
	char *k;
	int len = 0;

	while (str[len])
		len++;

	i = malloc(sizeof(list_t));
	if (!i)
		return (NULL);

	k = strdup(str);
	if (!k)
	{
		free(i);
		return (NULL);
	}
	i->str = k;
	i->len = len;
	i->next = NULL;

	if (*head == NULL)
	{
		*head = i;
		return (i);
	}
	while (j->next)
		j = j->next;

	j->next = i;
	return (i);
}

