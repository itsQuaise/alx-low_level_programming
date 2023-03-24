#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - a function that executes a funtion
 * @size: size of array
 * @action: pointer to the function
 * Return: void
 * @array: array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	for (a = 0; a < size; a++)
		action(array[a]);
}
