#include <stdlib.h>
#include <stdio.h>
/**
 * main - Prints the number of argumnets passed to it
 * @argc: Number of command line arguments
 * @argv: String value of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc - 1);
	return (0);
}
