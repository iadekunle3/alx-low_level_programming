#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - is used to add nodes to the beginning of list
 * @head: is the double pointer to list
 * @str: is the string input
 * Return: as specified
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *i;
	int len = 0;

	while (str[len])
		len++;

	i = malloc(sizeof(list_t));
	if (!i)
		return (NULL);

	i->str = strdup(str);
	if (!i->str)
	{
		free(i);
		return (NULL);
	}

	i->len = len;
	i->next = *head;
	*head = i;

	return (i);
}
