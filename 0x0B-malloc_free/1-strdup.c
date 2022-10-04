#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strdup - Copy a string in to a dyanmic memory
 * @str: string to be copied
 *
 * Return: a pointer to the duplicated string, or NULL if str = NULL
 * or if insufficient memory was availableclear
 */
char *_strdup(char *str)
{
	char *ch;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		ch = malloc(strlen(str) + 1);
		for (i = 0; i < (unsigned int)strlen(str); i++)
		{
			ch[i] = str[i];
		}
		if (ch == NULL)
		{
			return (NULL);
		}
		else
		{
			return (ch);
		}
	}
}
