#include "function_pointers.h"

/**
* print_name -  prints the name of a person
* @name: name of the person
* @f: pointer fo a function
*
* Return: Nothing
*/
void print_name(char *name, void(*f)(char *))
{
	(*f)(name);
}

