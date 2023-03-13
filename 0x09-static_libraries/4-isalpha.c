#include "main.h"

/**
 * _isalpha - Check for alphabet
 * @c: the chracter
 *
 *Return: 0 if lowercase or uppercase, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
