#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - Struct dog
 * @name: name
 * @age: age
 * @owner: owner
 * Description: For dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
