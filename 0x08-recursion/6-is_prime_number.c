#include "main.h"

/**
 * divisible_num - function that checks if a number is divisible.
 * @n: The number to be checked.
 * @d: The divisor.
 *
 * Return: if a number is divisible.
 */
int divisible_num(int n, int d)
{
	if (n % d == 0)
	{
		return (0);
	}
	else if (d == n / 2)
	{
		return (1);
	}
	else
	{
		return (divisible_num(n, d + 1));
	}
}

/**
 * is_prime_number - function that checks if a number is prime.
 * @n: The number to be checked.
 *
 * Return: a prime number.
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
	{
		return (0);
	}
	else if (n >= 2 && n <= 3)
	{
		return (1);
	}
	else
		return (divisible_num(n, div));
}
