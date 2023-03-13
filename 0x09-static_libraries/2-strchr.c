#include "main.h"

/**
 * _strchr - a funtion that locates character in a string
 * @c: character
 * @s: string
 * Return: NULL if c is not found
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (c == s[a])
		return (s + a);
	}
	return ('\0');
}
