#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints the number of arguments
 * @argc: count
 * @argv: Arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
