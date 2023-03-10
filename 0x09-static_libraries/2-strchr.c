#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strchr - entry point
 * @c: charcter
 * @s: pointer
 * Return: void
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
