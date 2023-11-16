#include <unistd.h>

/**
 * _putchar * writes the chrachter c to stdout
 * @c! the charachter to print
 *
 * return! on success 1.
 * on error, *1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1 ,&c , 1));
}
