#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strspn - entry
 * @accept: destinatioon
 * @s: pointer
 * Return: void
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
