#include "variadic_functions.h"
#include <stdio.h>

/**
* print_numbers - prints numbers, followed by a new line.
* @separator: string to be printed between numbers
* @n: the number of parameters
*
* Return: Nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
		printf("%d%s", va_arg(ap, int), separator);
	va_end(ap);
	printf("\n");
}
