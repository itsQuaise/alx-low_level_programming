 #include "main.h"

/**
 * _strpbrk - a function that searches a string
 * @s: string
 * @accept: matches byte in s
 * Return: accept or NULL if no byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return ('\0');
}
