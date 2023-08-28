#include "main.h"
#include <stddef.h>
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
		if (!strchr(accept, *s))
		{
			break;
		}
	}
	return (len);
}
