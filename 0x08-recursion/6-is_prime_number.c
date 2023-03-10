#include "main.h"

/**
 * _evaluate_num - recursion loop
 * @num: number
 * @iterator: number to interate
 * Return: 1 or 0
 */
int _evaluate_num(int num, int iterator)
{
/*evaluate*/
	if (iterator == num - 1)
	return (1);

	else if (num % iterator == 0)
	return (0);

	if (num % iterator != 0)
	return (_evaluate_num(num, iterator + 1));
	return (0);
}

/**
 * is_prime_number - input integer is pn
 * @num: number
 * Return: 0 or 1 if prime number
 */
int is_prime_number(int num)
{
/* now lets prime*/
	int iterator;

	iterator = 2;

	if (num < 2)
	{
	return (0);
	}
	if (num == 2)
	{
	return (1);
	}
	{
	return (_evaluate_num(num, iterator));
	}
}
