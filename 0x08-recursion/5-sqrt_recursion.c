#include "main.h"

/**
 * _sqrt_recursion - prints the natural sqr root
 * @n: integer given
 * Return: value
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - recurses to find natural sqrt root
 * @n: number given
 * @i: iterator
 * Return: sqrt value
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
