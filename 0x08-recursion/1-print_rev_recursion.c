#include "main.h"

/**
 * _print_rev_recursion - a funct that prints a stringn reverse
 * @s: pointer
 * Return: string
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
