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
	size_t len;

	for (len = 0; *s; s++, len++)
	{
		if (strchr(accept, *s))
		{
			return (0);
		}
	}
	return (len);
}
