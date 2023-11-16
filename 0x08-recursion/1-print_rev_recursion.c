#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse.
 * @s: The string vaiable to be printed.
 * void: prints a string in reverse.
 */

void _print_rev_recursion(chat *s)
{
	if (*s > '\0')
	{
		print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
