#ifndef FUNC_PTR
#define FUNC_PTR "function_pointers.h"
#include <stdlib.h>
void print_name(char *name, void(*f)(char *));
void array_iterator(int *array, size_t size, void(*action)(int));

#endif

