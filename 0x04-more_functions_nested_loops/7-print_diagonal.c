#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on a terminal
 * @n: number
 * Return: Diagonal
 */
void print_diagonal(int n)
{
	int con, dg;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (con = 1; con <= n; con++)
		{
		for (dg = 1; dg < con; dg++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		}
	}
}
