#include "main.h"

/**
 * _strlen - will print the length of a string
 * @s: string in consideration
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

		while (*s != '\0')
		{
			length++;
			s++;
		}
	return (length);
}
