#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a function that fress dog
 * @d: dog structure
 * Return: 0
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
