#include "main.h"

/**
 * square_root - function finds the natural square root.
 * @n: The number to find the square root.
 * @r: The root to be tested.
 *
 * Return: the natural square root.
 */
int square_root(int n, int r)
{
	if (r * r == n)
	{
		return (r);
	}
	else if (r == n / 2)
	{
		return (-1);
	}
	else
		return (square_root(n, r + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 *
 * Return: natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	int r = 2;

	if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
		return (square_root(n, r));
}
