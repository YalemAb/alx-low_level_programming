#ifndef DOG
#define DOG "dog.h"

/**
 * struct dog - pet animal
 * @name: "Poppy"
 * @age: age in years
 * @owner: Owner's name
 *
 * Description: Defines the basic info about dogs
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
