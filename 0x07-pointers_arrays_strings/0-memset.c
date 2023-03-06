#include "main.h"

/**
 * _memset - will fill a memory with  a byte
 *@s: start address of memory to be filled
 *@b: preferred value
 *@n: number of bytes
 *Return: new value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
		}
	return (s);
}
