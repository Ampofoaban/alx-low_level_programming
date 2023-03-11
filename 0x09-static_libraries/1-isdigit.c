#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isdigit - prints numbers
 * @c: integer
 * Return: void
=======

/**
 * _isdigit - checks for a digit (0 to 9)
 * @c: integer to be checked
 * Return: 1 if c is a digit otherwise 0
>>>>>>> b3b2589405054eb3a869fb446356852f371b35a7
 */

int _isdigit(int c)
{
<<<<<<< HEAD
	return (isdigit(c));
=======
	return (c >= '0' && c <= '9');
>>>>>>> b3b2589405054eb3a869fb446356852f371b35a7
}
