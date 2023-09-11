#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - is the function that frees dog
 * @d: is the pointer to dogs
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
