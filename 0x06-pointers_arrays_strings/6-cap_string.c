#include "main.h"

/**
 * cap_string - a function that capitalises strings
 * @str: string
 * Return: string
 */
char *cap_string(char *str)
{
	int b = 0;

	while (str[b])
	{
		while (!(str[b] >= 'a' && str[b] <= 'z'))

			b++;
		if (str[b - 1] == ',' ||
		str[b - 1] == ';' ||
		str[b - 1] == '.' ||
		str[b - 1] == ';' ||
		str[b - 1] == '?' ||
		str[b - 1] == '"' ||
		str[b - 1] == '(' ||
		str[b - 1] == ')' ||
		str[b - 1] == '{' ||
		str[b - 1] == '}' ||
		str[b - 1] == '\t' ||
		str[b - 1] == '\n' ||
		str[b - 1] == ' ' ||
		b == 0)
		str[b] -= 32;
		b++;
	}
	return (str);
}
