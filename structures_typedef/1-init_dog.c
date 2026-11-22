#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initialise un struct dog
 * @d: pointeur vers la structure
 * @name: nom
 * @age: âge
 * @owner: propriétaire
 *
 * Return: Rien.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
{
	if (d != NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;

}

