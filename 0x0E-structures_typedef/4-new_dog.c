#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates new dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog owner
 *
 * Return: pointer to new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i = 0, j = 0, k;

	if (!name || !owner)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);
	while (name[i])
		i++;
	dog->name = malloc(sizeof(char) * i + 1);
	if (!name)
	{
		free(dog);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		dog->name[i] = name[i];

	while (owner[i])
		j++;
	dog->owner = malloc(sizeof(char) *  + 1);
	if (!owner)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (k = 0; k < j; k++)
		dog->owner[i] = owner[i];
	dog->age = age;
	return (dog);
}
