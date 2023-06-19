#include "dog.h"
/**
 * init_dog - init dog info
 *
 * @d: dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog owner
 *
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (0);
}
