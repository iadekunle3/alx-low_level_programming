#include "main.h"
/**
 * _strchr - is used to search for character
 * @i: is the string value
 * @j: is the character used
 * Return: as specified
 */
char *_strchr(char *i, char j)
{
	while (*i != '\0')
	{
		if (*i == j)
		{
			return (j);
		}
		j++;
	}
	return (NULL);
}
