#include "main.h"

/**
 * more_numbers -  print from 0 to 14
 * Return: Always 0
 */
void more_numbers(void)
{
	int num, a;

	for (a = 1; a <= 10; a++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
				_putchar('1');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');

	}
}
