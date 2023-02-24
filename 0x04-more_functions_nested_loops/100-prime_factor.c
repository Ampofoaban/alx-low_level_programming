#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * main - print the largesy prime number of a certain no.
 * Return: 0 (victory)
 */

int main(void)
{
	long a, maxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (a = 1; a <= square; a++)
	{
		if (number % a == 0)
		{
		maxf = number / a;
		}
	}
	printf("%ld\n", maxf);
	return (0);
}
