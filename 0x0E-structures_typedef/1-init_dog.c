#include <stdio.h>
#include "dog.h"
/**
 * init_dog - is the function to declare variables
 * @d: is the pointer to the defined structure
 * @name: is the name of the declared structure
 * @age: is the declared age value
 * @owner: is the defind owner of the structure
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
