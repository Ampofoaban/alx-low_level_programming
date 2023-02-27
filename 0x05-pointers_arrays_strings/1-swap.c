#include "main.h"
#include <stdio.h>
/**
 * swap_int - will swap the value of two integers
 * @a: first integer to be swaped
 * @b: second integer to be swaped
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
