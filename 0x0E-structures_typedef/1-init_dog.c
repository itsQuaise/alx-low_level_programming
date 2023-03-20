#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialise a variable of structure dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * @d: dog structure
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}

