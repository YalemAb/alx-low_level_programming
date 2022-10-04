#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates a dynamic array of chars
 * @size: size of the array
 * @c: initalization character
 *
 * Return: a pointer array, or NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	int i;

	if (size > 0)
	{
		ch = (char *)malloc(size);
		for (i = 0; i < (int)(size); i++)
		{
			ch[i] = c;
		}
		return (ch);
		free(ch);
	}
	else
	{
		return (NULL);
	}
}

