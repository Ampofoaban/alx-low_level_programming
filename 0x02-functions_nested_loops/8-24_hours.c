#include "main.h"

/**
 * jack_bauer - print every minute
 * Return:...
 */

void jack_bauer(void)
{
	int e, g, h, j;

	for (e = 0; e <= 2; e++)
	{
	for (g = 0; g <= 9; g++)
	{
	if ((e <= 1 && g <= 9) || (e <= 2 && g <= 3))
	{
	for (h = 0; h <= 5; h++)
	{
	for (j = 0; j <= 9; j++)
	{
		_putchar(e + '0');
		_putchar(g + '0');
		_putchar(58);
		_putchar(h + '0');
		_putchar(j + '0');
		_putchar('\n');
	}
	}
	}
	}
	}
}
