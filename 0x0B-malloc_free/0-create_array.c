#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - a program that creates an array of chars
 * @c: char
 * @size: number of arrays
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int positions;

	if (size == 0)
	{
	return (NULL);
	}

	buffer = (char *) malloc(size * sizeof(c));

	if (buffer == 0)
	{
	return (NULL);
	}
	else
	{
	positions = 0;
	while (positions < size)
	{
	*(buffer + positions) = c;
	positions++;
	}
	return (buffer);
	}
}
