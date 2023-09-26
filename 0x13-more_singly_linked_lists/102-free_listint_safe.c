#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: double pointer to the head of the list
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t num = 0;
	listint_t *slow, *fast, *free_ptr;

	if (h == NULL || *h == NULL)
		return (0);

	slow = *h;
	fast = *h;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		num++;
		if (slow == fast && num > 1)
		{
			*h = NULL;
			return (num);
		}

		free_ptr = slow;
		slow = slow->next;
		fast = fast->next->next;

		free(free_ptr);
	}

	free(slow);
	*h = NULL;

	return (num);
}

