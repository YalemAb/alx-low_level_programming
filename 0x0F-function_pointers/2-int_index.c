#include "function_pointers.h"

/**
* int_index - a function that searches for an integer in an array.
* @array: pointer to first element of the array
* @size: size of the array
* @cmp: pointer to a function
*
* Return: index of the first element where cmp function does not return 0
*         -1 if size is 0 or no element matches
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, tmp;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		tmp = cmp(array[i]);
		if (tmp != 0)
			return (i);
	}
	return (-1);
}

