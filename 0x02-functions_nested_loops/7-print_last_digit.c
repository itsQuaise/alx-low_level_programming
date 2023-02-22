#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: the number
 * Return: value of last digits
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	if (n < 0)
		n = -n;
	_putchar(x + '0');
	return (x);
}
