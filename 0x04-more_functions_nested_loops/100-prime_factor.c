#include <stdlib.h>
#include <stdio.h>
#include <math.h>
/**
 * main - print the largest prime factor
 * Return: Always 0
 */
int main(void)
{
	long num = 612852475143;
	int c;

	for (c = (int) sqrt(num); c > 2; c++)
	{
		if (num % c == 0)
		{
			printf("%d\n", c);
			break;
		}
	}
	return (0);
}
