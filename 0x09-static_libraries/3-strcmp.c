#include "main.h"

/**
 * _strcmp - A function that compares 2 strings
 * @s1: first
 * @s2: second
 * Return: output
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
	a++;
	}
	return (0);
}
