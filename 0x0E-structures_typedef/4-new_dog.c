#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *to, char *from);

/**
 * new_dog - new struct for dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: Nothing
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int name_1 = 0, owner_1 = 0;
	dog_t *poppy;

	if (name != NULL && owner != NULL)
	{
		name_1 = _strlen(name) + 1;
		owner_1 = _strlen(owner) + 1;
		poppy = malloc(sizeof(dog_t));

		if (poppy == NULL)
		{
			return (NULL);
		}

		poppy->name = malloc(sizeof(char) * name_1);

		if (poppy->name == NULL)
		{
			free(poppy);
			return (NULL);
		}

		poppy->owner = malloc(sizeof(char) * owner_1);

		if (poppy->owner == NULL)
		{
			free(poppy->name);
			free(poppy);
			return (NULL);
		}

		poppy->age = age;
		poppy->name = _strcpy(poppy->name, name);
		poppy->owner = _strcpy(poppy->owner, owner);
	}

	return (poppy);
}
/**
 * _strlen - calculating the length of string
 * @s: the string
 *
 * Return: The length
 */

int _strlen(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - copying string into another one
 * @to: string to copy to
 * @from: string to copy from
 *
 * Return: to
 */


char *_strcpy(char *to, char *from)
{
	int i;

	for (i = 0; from[i] != '\0'; i++)
	{
		to[i] = from[i];
	}

	to[i++] = '\0';

	return (to);
}
