#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - a function that converts strings to integer
 * @s: char
 * Return: output
 */
int _atoi(char *s)
{
	int x = 1;
	unsigned int num = 0;

	{
	if (*s == '-')
		x *= -1;
	else if (*s >= '0' && *s <= '9')
		num = (num * 10) + (*s - '0');
	else if (num > 0)
		return (1);
	}	while (*s++);
	return (num * x);
}
