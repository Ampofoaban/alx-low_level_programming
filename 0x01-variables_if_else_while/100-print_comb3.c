#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Return: always (victory)
 */

int main(void)

{

	int d, p;

	for (d = '0'; d < '9'; d++)
	{
	putchar(d);
	for (p = d + 1; p <= 9; p++)
	{
	if (p != d)
	{
	putchar(p);
	if (d == '8' && p == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
