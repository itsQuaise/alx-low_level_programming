#include "main.h"

/**
 * _strlen_recursion - a function that returns the lenght of a string
 * @s: string
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
	{
		l++;
		l += _strlen_recursion(s + 1);
	}
	return (l);
}
