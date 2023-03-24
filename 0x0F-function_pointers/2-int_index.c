#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - a function that searches an integer
 * @size: number of element in array
 * @cmp: pointer to the compared value function
 * @array: array
 * Return: Always 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (array == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
			return (a);
	}
		return (-1);
}
