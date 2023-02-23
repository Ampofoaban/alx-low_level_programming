#include "main.h"

/**
 * _isupper - will check for uppercase characters
 * @c: character to be checked
 * Return: 1 if charcter is uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
