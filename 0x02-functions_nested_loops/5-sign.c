#include "main.h"

/**
 * print_sign - function that print sign of a number
 * @n: the number of the sign to be printed
 * Return: 1 if greater than zero, 0 if zero ,-1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
