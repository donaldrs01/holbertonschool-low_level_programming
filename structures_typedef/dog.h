#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a basic structure with three variables
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: I don't know what else to include here
 */

struct dog
{
	char name[50];
	float age;
	char owner[50];
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
