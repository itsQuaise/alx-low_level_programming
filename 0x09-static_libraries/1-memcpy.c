#include "main.h"

/**
 * _memcpy - a function that copy a memory area
 * @n: integer
 * @src: source
 * @dest: destination
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int b;

	for (b = 0; b < n; b++)
		dest[b] = src[b];
	return (dest);
}
