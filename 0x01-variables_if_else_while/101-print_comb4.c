#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Return: 0 (victory)
 */
int main(void)
{
	int i, a, b;

	i = 0;

	while (i < 1000)
	{
		a = i % 100; /* double digit */
		b = i / 100; /* Three digit */

		if (b > a)
		{
			putchar(b + '0');
			putchar(a + '0');

			if (i < 789)
			{
				putchar(44);
				putchar(32);
			}
		}

		i++;
	}
	putchar('\n');

	return (0);
}
