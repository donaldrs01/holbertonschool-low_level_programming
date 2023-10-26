#include <stdio.h>
#include <string.h>
#include "dog.h"
/**
 * print_dog - prints the contents of a struct dog
 * @d: pointer to the struct dog
 */
void print_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("Age: %.1f\n", d->age);
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}

int main
