#include "main.h"

/**
 * print_alphabet_x10 - prints all aphabets 10 times
 * Return: void (victory)
 */

void print_alphabet_x10(void)
{
	char d;

	int c = 0;

	while (c <= 9)
	{
		for (d = 'a'; d <= 'z'; d++)
		{
			_putchar(d);
		}
		_putchar('\n');
		c++;
	}
}
