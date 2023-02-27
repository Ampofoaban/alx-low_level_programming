#include "main.h"
#include <stdio.h>

/**
 * print_array - entry point
 * @a: array
 * @n: number of elemnts to be printed
 */

void print_array(int *a, int n)
{
	int d;

	for (d = 0; d < n; d++)
	{
		printf("%d", a[d]);
		if (d != n - 1)
			printf(", ");
	}
	printf("\n");
}
