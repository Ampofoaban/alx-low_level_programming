#include "main.h"

/**
 * print_most_numbers - print numbers fro 0 to 9 with exception
 * Return: numbers (victory)
 */

void print_most_numbers(void)
{
	int d;
		for (d = 0; d <= 9; d++)
		{
			if (d == 2 || d == 4)
			{
			continue;
			}
			else
			{
				_putchar(d + '0');
			}
			_putchar('\n');
		}
}
