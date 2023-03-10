#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strpbrk - entry
 * @accept: detination
 * @s:  pointer
 * Return: void
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
