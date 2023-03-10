#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memset - entry point
 * @b: charcter input
 * @n:number of bytes
 * @s: pointer
 * Return: void
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
