#include "dog.h"
/**
 * init_dog - init dog info
 *
 * @d: dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog owner
 *
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
