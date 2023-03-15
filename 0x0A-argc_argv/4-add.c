#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check strings for digits
 * @str: array string
 * Return: Always 0
 */
int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
	if (!isdigit(str[count]))
	{
	return (0);
	}
	count++;
	}
	return (1);
}

/**
 * main - print name of program
 * @argc: count
 * @argv: arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int count;
	int str_toint;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
	if (check_num(argv[count]))
	{
	str_toint = atoi(argv[count]);
	sum += str_toint;
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	count++;
	}
	printf("%d\n", sum);
	return (0);
}
