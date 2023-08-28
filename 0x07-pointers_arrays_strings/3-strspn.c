#include "main.h"
#include <stddef.h>
#include <string.h>
/**
 * _strspn - is the function that takes length
 * @s: is the string value
 * @accept: is the accept value
 * Return: as specified
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	size_t len = 0;

	while (*s && strchr(accept, *s++))
	{
		len++;
	}
	return (len);
}
