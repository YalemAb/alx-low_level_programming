#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - concanest two strings
 * @n: size of string s2 to concatnete
 *
 * Return: a pointer to the concatned string,
 *         s1 followed by the first n bytes of s2, and null terminated
 *         if function fails returns NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatstr;
	unsigned int i, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
		n = strlen(s2);
	concatstr = malloc(strlen(s1) + n + 1);
	if (concatstr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < strlen(s1); i++)
			concatstr[i] = s1[i];
		for (j = 0; j < n; j++)
			concatstr[i + j] = s2[j];
		concatstr[i + j] = '\0';
		return (concatstr);
	}
}
