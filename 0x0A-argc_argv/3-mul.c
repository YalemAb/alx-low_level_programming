#include <stdlib.h>
#include <stdio.h>
/**
 * main - Multiplies two integers
 * @argc: Number of command line arguments
 * @argv: String value of arguments
 *
 * Return: 0 if orrect input, 1 otherwise
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
