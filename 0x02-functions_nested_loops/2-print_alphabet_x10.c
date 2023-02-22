#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet 10times
 */
void print_alphabet_x10(void)
{
	int ten;
	char alp;

	for (ten = 0; ten <= 9; ten++)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
			_putchar(alp);
		_putchar('\n');
	}
}
