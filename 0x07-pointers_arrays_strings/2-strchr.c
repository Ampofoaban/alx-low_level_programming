#include "main.h"

/**
 * _strchr - locates a character in a string
 * @c: character to be located
 * @s: pointer
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
