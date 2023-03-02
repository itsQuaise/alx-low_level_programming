#include "main.h"

/**
 * string_toupper - a function that changes lowercase to uppercase
 * @n: pointer
 * Return: Output
 */
char *string_toupper(char *n)
{
	int b;

	b = 0;
	while (n[b] != '\0')
	{
		if (n[b] >= 'a' && n[b] <= 'z')
			n[b] = n[b] - 32;
		b++;
	}
	return (n);
}
