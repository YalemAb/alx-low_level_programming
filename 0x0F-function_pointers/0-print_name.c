#include "function_pointers.h"

/**
* print_name -  prints an n digit integer number using _putchar function
* @name: name of the person
* @f: pointer fo a function
*
* Return: Nothing
*/
void print_name(char *name, void(*f)(char *))
{
	f(name);
}
