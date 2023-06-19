#include "dog.h"
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i = 0, j = 0, k;
	if (!name || !owner)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);
	if (name)
	{
		while(name[i])
			i++;
	}
	dog->name = malloc(sizeof(char) * i + 1);
	if (!name)
	{
		free (dog);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		dog->name[i] = name[i];
	if (owner)
	{
		while(owner[i])
			j++;
	}
	dog->owner = malloc(sizeof(char) * i + 1);
	if (!owner)
	{
		free (dog->name);
		free (dog);
		return (NULL);
	}
	for (k = 0; k < j; k++)
		dog->owner[i] = owner[i];
	dog->age = age;
	return dog;
}
