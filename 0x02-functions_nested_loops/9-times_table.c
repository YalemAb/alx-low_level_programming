#include "main.h"
/**
* print_ndigit -  prints an n digit integer number using _putchar function
* @x: Number to be printed
* @n: Maximum expected number of digits
*
* Return: Nothing
*/
void print_ndigit(int x, int n)
{
	int i, tmp, _10n;

	_10n = 1;
	for (i = 1; i < n; i++)
		_10n *= 10;
	while (n > 1)
	{
		tmp = x / (_10n);
		if (tmp > 0)
		{
			_putchar('0' + tmp);
			x = x % (_10n);
		}
		n--;
		_10n /= 10;
	}
	_putchar('0' + x);
}
/**
* times_table -  prints the 9 times table, starting with 0.
*
* Return: Nothing
*/
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			if ((i * j) < 10)
			{
				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				print_ndigit((i * j), 2);
			}
			else
			{
				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				print_ndigit((i * j), 2);
			}
		}
		_putchar('\n');
	}
}

