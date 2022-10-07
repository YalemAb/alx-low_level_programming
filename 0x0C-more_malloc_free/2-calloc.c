#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements in array
 * @size: size of each member in bytes
 *
 * Return: a pointer to the allocated memory,
 *         if @nmemb or @size = 0, NULL
 *         if failure, NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	else
	{
		arr = malloc(nmemb * size);
		if (arr == NULL)
			return (NULL);
		else
			return (arr);
	}
}
