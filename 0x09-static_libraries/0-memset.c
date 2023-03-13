#include "main.h"

/**
 * _memset - a function that fills memero with constant byte
 * @b: the address of memory to print
 * @s: size of memery to print
 * @n: an integer
 * Return: Size
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
		s[c] = b;
	return (s);
}
