#include "main.h"

/**
 * _strlen_recursion - size
 * @s: pointer
 * Return: output
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
	return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * p1 - palindrome
 * @s: pointer
 * @j: position
 * Return: boolen
 */
int p1(char *s, int j)
{
/*lets use boolen to solve*/

	if (j < 1)
	{
		return (1);
	}

	if (*s == *(s + j))
	{
		return (p1(s + 1, j - 2));
	}
	return (0);
}

/**
 * is_palindrome - palindrom function
 * @s: pointer
 * Return: recursion
 */
int is_palindrome(char *s)
{
/* now lets palindrome */

	int l = _strlen_recursion(s);

	return (p1(s, l - 1));
}
