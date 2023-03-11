#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isupper - entry point
 * @c: char to be printed
 * Return: void
=======

/**
 * _isupper - prints in uppercase letters
 * @c: character to check
 * Return: 1 and 0
>>>>>>> b3b2589405054eb3a869fb446356852f371b35a7
 */

int _isupper(int c)
{
<<<<<<< HEAD
	return (c >= 'A' && c <= 'Z');
=======
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
>>>>>>> b3b2589405054eb3a869fb446356852f371b35a7
}
