#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <math.h>

/**
 * _strlen - count array
 * @s: array of elements
 * Return: 1
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
 * _strcpy - copyarrays
 * @src: array source
 * @dest: array destination
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
	dest[a] = src[a];
	a++;
	}
	dest[a] = '\0';
	return (dest);
}

/**
* _strdup - contains a copy of strings
* @str: array of elements
* Return: pointer
*/
char *_strdup(char *str)
{
	char *dst;
	unsigned int size;

	if (str == 0)
	{
	return (NULL);
	}

	size = _strlen(str) + 1;

	dst = (char *) malloc(size * sizeof(char));

	if (dst == 0)
	{
	return (NULL);
	}
	_strcpy(dst, str);
	return (dst);
}
