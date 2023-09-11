#include <stdio.h>
#include "dog.h"
#include <stddef.h>
/**
 * print_dog - is the function to print dog details
 * @d: is the pointer to the dog structure
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name : %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.1f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
