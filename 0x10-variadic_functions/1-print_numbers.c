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
	for (i = 1; i <= n; i++)
	{
		if (i == n)
			printf("%d\n", va_arg(ap, int));
		printf("%d%s", va_arg(ap, int), separator);
	}
	va_end(ap);
}
