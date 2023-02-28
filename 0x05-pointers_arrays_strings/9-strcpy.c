#include "main.h"
/**
 * _strcpy - a function that copy a string by src
 * @src: source
 * @dest: destination
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = '\0';
	return (dest);
}
