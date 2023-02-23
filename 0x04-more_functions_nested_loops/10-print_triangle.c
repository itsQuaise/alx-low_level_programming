#include "main.h"

/**
 * print_triangle - a function that prints triangle followed by a new line
 * @size: size of the traingle
 * Return: Traingle of "#"
 */
void print_triangle(int size)
{
	int base, hgt, tr;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (hgt = 0; hgt <= (size - 1); hgt++)
	{
	for (base = 0; base < (size - 1) - hgt; base++)
	{
		_putchar(' ');
	}
	for (tr = 0; tr <= hgt; tr++)
	{
		_putchar('#');
	}
	_putchar('\n');
	}
	}
}
