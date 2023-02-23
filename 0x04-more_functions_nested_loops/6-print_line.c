#include "main.h"

/**
 * print_line - Draws a straight line using the character_
 * @n: The number of _ characters to be printed
 * Return: Straight line
 */
void print_line(int n)
{
	int con;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (con = 1; con <= n; con++)
	{
			_putchar('_');
		}
	_putchar('\n');

	}
}
