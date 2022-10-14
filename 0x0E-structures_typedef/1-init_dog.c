#include "dog.h"

/**
* init_dog - initialize a variable of type struct dog
* @d: struct dog type to initialize
* @name: name of the dog
* @age: age of the dog
* @owner: owner's name
*
* Return: Nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
