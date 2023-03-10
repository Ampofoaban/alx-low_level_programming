#include <unistd.h>

/**
 * _putchar - write the character d to stdout
 * @d - the character to print
 * Return: on success 1.
 * on error -1 is returned, and set error appropriately
 */

int _putchar(char d)
{
	return (write(1, &d, 1));
}
