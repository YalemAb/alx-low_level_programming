#include "dog.h"
#include <stdio.h>

/**
* print_dog -  prints a struct dog
* @d: struct dog type to print
*
* Return: Nothing
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		printf("Name: %s\n", d->name);
		printf("Age: %.1f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		printf("Owner: %s\n", d->owner);
	}
}
