#include "main.h"
#include <string.h>
/**
 * _memset - is the memory of the address value
 * @s: is the storage file
 * @b: is the bytes of the memory used
 * @n: is the user input
 * Return: as specified
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
