#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * _strlen - count array
 * @s: array of element
 * Return: a
 */
int _strlen(char *s)
{
	unsigned int a;

	a = 0;
	while (s[a] != '\0')
	{
	a++;
	}
	return (a);
}

/**
 * str_concat - a funtion thata concacenates two strings
 * @s1: array one
 * @s2: array two
 * Return: Always array dynamic
 */
char *str_concat(char *s1, char *s2)
{
	char *dst;
	unsigned int a, b, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size = (_strlen(s1) + _strlen(s2) + 1);
	dst = (char *) malloc(size * sizeof(char));

	if (dst == 0)
	{
	return (NULL);
	}
	for (a = 0; *(s1 + a) != '\0'; a++)
		*(dst + a) = *(s1 + a);
	for (b = 0; *(s2 + b) != '\0'; b++)
	{
		*(dst + a) = *(s2 + b);
		a++;
	}
	return (dst);
}
