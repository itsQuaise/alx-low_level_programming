#include "main.h"

/**
 * _evaluate - solve a function sqrt
 * @n: integer
 * @i: integer
 * Return: solve sqrt
 */
int _evaluate(int i, int n)
{
/*evaluate*/
	if (n == 0 || n == 1)
	return (n);

	else if (i * i < n)
	return (_evaluate(i + 1, n));

	else if (i * i == n)
	return (i);
	return (-1);
	return (-1);
}

/**
 * _sqrt_recursion - evaluate sqrt
 * @n: integer
 * Return: sqrt_recursion
 */
int _sqrt_recursion(int n)
{
/* now lets sqrt*/
	int i = 0;

	if (i < 0)
	{
	return (-1);
	}
	else
	{
	return (_evaluate(i, n));
	}

}
