#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print dog info
 *
 * @d: dog struct
 *
 * Return: void.
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "Name: (nil)");
		if (d->age)
			printf("Age: %f\n", d->age);
		else
			printf("Age: (nil)\n");
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
