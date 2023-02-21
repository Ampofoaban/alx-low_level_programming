#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: character to be checked
 * Return: 1 if num is positive, 0 if num is 0 and -1 if num is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
