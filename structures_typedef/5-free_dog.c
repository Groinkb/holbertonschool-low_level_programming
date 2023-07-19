#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog_t structure
 * @d: Pointer to dog_t structure
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
