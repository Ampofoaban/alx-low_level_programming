#include "main.h"

/**
 * print_last_digit - will print lastdigit
 * @n: number to be inputed
 * Return: value of lastdigit
 */

int print_last_digit(int n)
{
	int lastd;

	lastd = n % 10;
	if (lastd < 0)
	{
	lastd = lastd * -1;
	}
	_putchar(lastd + '0');
	return (lastd);
}
