#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * str_concat - concanest two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: a pointer to the concatned string, or NULL if s1 = s2 = NULL
 * or in case of failure
 */
char *str_concat(char *s1, char *s2)
{
	char *ch;
	unsigned int i;

	ch = malloc(strlen(s1) + strlen(s2) + 1);
	if (ch == NULL)
	{
		return (NULL);
	}
	else
	{
		if (s1 == NULL && s2 == NULL)
		{
			ch[0] = '\0';
			return (ch);
		}
		else
		{
			for (i = 0; i < (unsigned int)strlen(s1); i++)
			{
				ch[i] = s1[i];
			}
			for (i = 0; i < (unsigned int)strlen(s2); i++)
			{
				ch[i + (unsigned int)strlen(s1)] = s2[i];
			}
			return (ch);
		}
	}
}
