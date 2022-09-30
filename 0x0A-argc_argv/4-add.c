#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * main - Adds positive integers
 * @argc: Number of command line arguments
 * @argv: String value of arguments
 *
 * Return: 0 if orrect input, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; j < (int)strlen(argv[i]); j++)
			{
				if (isdigit(argv[i][j]))
				{
					continue;
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("0\n");
		return (0);
	}
}
