#include <stdio.h>
#include <string.h>
#include "dog.h"
/**
 * print_dog - prints the contents of a struct dog
 * @d: pointer to the struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	printf("Age: %s\n", d->age != NULL ? d->owner : "(nil)");
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
