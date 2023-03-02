#include "main.h"

/**
 * reverse_array - A function that reverses the content of an array
 * @n: number of element to swap
 * @a: array of integers
 * Return: Output
 */
void reverse_array(int *a, int n)
{
	int b;
	int c;

	for (b = 0; b < n; b++)
	{
		n--;
		c = a[b];
		a[b] = a[n];
		a[n] = c;
	}
}
