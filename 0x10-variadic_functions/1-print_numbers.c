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
	char *tmp_sep;

	va_start(ap, n);
	tmp_sep = (char *)separator;
	if (separator == NULL)
		tmp_sep = "";
	for (i = 0; i < (n - 1); i++)
		printf("%d%s", va_arg(ap, int), tmp_sep);
	printf("%d\n", va_arg(ap, int));
	va_end(ap);
}
