#include "variadic_functions.h"

/**
* sum_them_all - function that returns the sum of all its parameters.
* @n: the number of parameters
*
* Return: sum of the parameters, 0 if n is zero
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, count;
	va_list ap;

	if (n == 0)
		return (0);
	count = n;
	va_start(ap, n);
	while (count > 0)
	{
		sum += va_arg(ap, int);
		count--;
	}
	va_end(ap);
	return (sum);
}
