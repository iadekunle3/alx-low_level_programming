#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * new_dog - is the function to create a new dog
 * @name: is the name of the dog
 * @age: is the age of the dog
 * @owner: is the name of the owner
 * Return: as specified
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);
	}
	newDog->name = malloc(strlen(name) + 1);
	if (newDog->name = NULL)
	{
		free(newDog);
		return (NULL);
	}
	strcpy (newDog->owner, owner);

	newDog->age = age;

	return (newDog);
}
