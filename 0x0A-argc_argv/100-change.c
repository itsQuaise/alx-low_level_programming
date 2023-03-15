#include "main.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints minimun number of coins
 * @argc: lenght of argument
 * @argv: argument
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int positn, total, change, aux;
	int coins[] = {25, 10, 5, 2, 1};

	positn = total = change = aux = 0;
	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}
	total = atoi(argv[1]);
	if (total <= 0)
	{
	printf("0\n");
	return (0);
	}

	while (coins[positn] != '\0')
	{
	if (total >= coins[positn])
	{
	aux = (total / coins[positn]);
	change += aux;
	total -= coins[positn] * aux;
	}
	positn++;
	}
	printf("%d\n", change);
	return (0);
}
