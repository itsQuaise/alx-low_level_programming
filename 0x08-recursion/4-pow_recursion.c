#include "main.h"

/**
 * _pow_recursion - a funct that returne x rpow y
 * @x: interger 1
 * @y: integer 2
 * Return: -1 if y is < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);

	else
	if (y != 0)
	return (x * _pow_recursion(x, y - 1));

	else
	return (1);
}
