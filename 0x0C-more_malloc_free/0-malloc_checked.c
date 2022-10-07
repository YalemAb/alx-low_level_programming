#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: memory size in bytes to be allocated
 *
 * Return: a pointer to the allocated memory,
 *         if failure, terminate with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *memalloc = malloc(b);

	if (memalloc == NULL)
	{
		exit(98);
	}
	else
	{
		return (memalloc);
	}
}
