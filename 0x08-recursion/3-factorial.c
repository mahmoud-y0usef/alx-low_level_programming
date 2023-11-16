#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 * @n: The number to find the factorial of.
 *
 * Return: the factorial of a given number.
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		result *= factorial(n - 1);
		return (result);
	}
}

