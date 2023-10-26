#include "main.h"
#include "dog.h"
#include <string.h>
/**
 * init_dog - initializes variable of type struct dog
 * @d: the initialized variable
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
}
