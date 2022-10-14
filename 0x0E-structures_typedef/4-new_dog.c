#include "dog.h"
#include <stdlib.h>

/**
* _strlen -  calculates the length of a string
* @str: string for which length is determined
*
* Return: length of the string, or 0 if string is null
*/
unsigned int _strlen(char *str)
{
	unsigned int i = 0;

	if (str == NULL)
		return (0);
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
* _strcpy -  copies contents of one string 1 to string 2
* @str1: string 1 (to be copied)
* @str2: string 2 (stores copy of string 1)
*
* Return: Nothing
*/
void _strcpy(char *str1, char *str2)
{
	unsigned int i;

	if (str1 == NULL)
	{
		str2 = NULL;
	}
	else
	{
		for (i = 0; i <= _strlen(str1); i++)
		{
			str2[i] = str1[i];
		}
	}
}

/**
* new_dog -  creates a new dog of type struct dog using type dog_t
* @name: name of the dog
* @age: age of the dog
* @owner: owner's name
*
* Return: pointer to the newly created type dog_t
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t d, *ptr_d;
	char *cp_name, *cp_owner;

	d.name = name;
	d.age = age;
	d.owner = owner;
	ptr_d = &d;
	cp_name = malloc(_strlen(name) + 1);
	if (cp_name == NULL)
		return (NULL);
	_strcpy(name, cp_name);
	cp_owner = malloc(_strlen(owner) + 1);
	if (cp_owner == NULL)
		return (NULL);
	_strcpy(owner, cp_owner);
	return (ptr_d);
}
