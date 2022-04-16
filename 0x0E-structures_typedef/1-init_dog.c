#include "dog.h"

/**
 * init_dog - initialize struct dog
 * @d: - pointer to struct
 * @name: char param
 * @age: float param
 * @owner: char param
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	(*d).owner = owner;
}
