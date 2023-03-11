#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _abs - entry point
 * @n: no. of bytes
 * Return: void
 */

int _abs(int n)
{
	return (abs(n));
=======

/**
 * _abs - computes the absolute value of an integer
 * @n: the int to check
 * Return: the absolute value of int
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
>>>>>>> b3b2589405054eb3a869fb446356852f371b35a7
}
