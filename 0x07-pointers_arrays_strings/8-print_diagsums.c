#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints sum of two diag of a square matrix
 * @size: size
 * @a: integer
 */
void print_diagsums(int *a, int size)
{
	int b, s1 = 0, s2 = 0;

	for (b = 0; b < size; b++)
	{
		s1 += a[b];
		a += size;
	}
	a -= size;

	for (b = 0; b < size; b++)
	{
		s2 += a[b];
		a -= size;
	}
	printf("%d, %d\n", s1, s2);
}
