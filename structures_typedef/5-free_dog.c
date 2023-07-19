#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - a function that frees the dogo
 * @d : a pointer to dog_t data
 * return : Null or free the memory
*/

void free_dog(dog_t *d)
{
	if (d==NULL)
		return NULL;

	free(d->owner);
	free(d->name);
	free(d);

}
