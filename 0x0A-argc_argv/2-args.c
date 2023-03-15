#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints all arguments
 * @argc: count
 * @argv: arugument
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int cnt = 0;

	if (argc > 0)
	{
	while (cnt < argc)
	{
	printf("%s\n", argv[cnt]);
	cnt++;
		}
	}
	return (0);
}
