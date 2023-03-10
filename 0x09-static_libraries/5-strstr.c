#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strstr - entry
 * @haystack: charcter
 * @needle: char
 * Return: void
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
