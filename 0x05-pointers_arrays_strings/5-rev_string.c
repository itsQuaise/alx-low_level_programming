#include "main.h"

/**
 * rev_string - a function that reverse a string
 * @s: string
 * Return: string in reverse
 */
void rev_string(char *s)
{
	int j;
	int c = 0;
	char rev = s[0];

	while (s[c] != '\0')
		c++;
	for (j = 0; j < c; j++)
	{
		c--;
		rev = s[j];
		s[j] = s[c];
		s[c] = rev;
	}
}
