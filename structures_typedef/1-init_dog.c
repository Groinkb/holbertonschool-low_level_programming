#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"
/*
init_dog - a function that initialize a variable of type struct dog
 *
 * @d: structure of dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		strcpy(d->name, name);
		d->age = age;
		strcpy(d->owner, owner);

 }
}
