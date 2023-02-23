#include "main.h"

/**
 * print_square - print a square followed by a new line
 * @size: size of both lenght and width
 * Return: square made of "#"
 */
void print_square(int size)
{
	int le, wd;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (le = 1; le <= size; le++)
	{
		_putchar('#');

		for (wd = 2; wd <= size; wd++)
		{
			_putchar('#');

		}
		_putchar('\n');
		}
	}
}
