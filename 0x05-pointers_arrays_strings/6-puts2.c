#include "main.h"

/**
 * puts2 - first character followed by a new line
 * @str: string
 * Return: output
 */
void puts2(char *str)
{
	int j = 0;

	for (; str[j] != '\0'; j++)
	{
		if ((j % 2) == 0)
			_putchar(str[j]);
		else
			continue;
	}
	_putchar('\n');
}
