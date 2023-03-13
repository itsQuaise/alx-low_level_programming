#include "main.h"

/**
 * _isupper - Uppercase letters
 * @c: char to check uppercase
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
