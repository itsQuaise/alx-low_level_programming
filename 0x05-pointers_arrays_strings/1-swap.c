#include "main.h"

/**
 * swap_int - a function that swaps teo integers
 * @a: integer a
 * @b: integer b
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int constant = *a;

	*a = *b;
	*b = constant;
}
