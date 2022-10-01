#include <stdlib.h>
#include <stdio.h>
/**
 * main - Prints minimum number of coins to make cahnge
 * @argc: Number of command line arguments
 * @argv: String array containg value of arguments
 *
 * Return: 0 if correct command line input, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int cents, i, tmp1, counter = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);
		if (cents <= 0)
		{
			printf("0\n");
		}
		else
		{
			for (i = 0; i < 5; i++)
			{
				tmp1 = cents / coins[i];
				if (tmp1 > 0)
				{
					counter += tmp1;
					cents = cents % coins[i];
				}
				else
				{
					continue;
				}
			}
			printf("%d\n", counter);
		}
		return (0);
	}
}
