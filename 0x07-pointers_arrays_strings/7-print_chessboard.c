#include "main.h"

/**
 * print_chessboard - a function that prints chessboard
 * @a: char
 * Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
	int b, c;

	for (b = 0; a[b][7]; b++)
	{
		for (c = 0; c < 8; c++)
			_putchar(a[b][c]);
		_putchar('\n');
	}
}
