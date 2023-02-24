#include "main.h"

/**
 * print_number - will print an integer
 * @n: will be the integer to be printed
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int d = n;

	if (n < 0)
	{
	n *= -1;
	d = n;
	_putchar('-');
	}
	d /= 10;
	if (d != 0)
	print_number(d);
	_putchar((unsigned int) n % 10 + '0');
}

