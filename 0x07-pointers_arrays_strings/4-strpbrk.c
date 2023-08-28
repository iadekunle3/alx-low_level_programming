#include "main.h"
#include <string.h>
#include <stddef.h>
/**
 * _strpbrk - is the function that searches for bytes
 * @s: is the string value
 * @accept: is the value given
 * Return: as specified
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (strchr(accept, *s))
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
