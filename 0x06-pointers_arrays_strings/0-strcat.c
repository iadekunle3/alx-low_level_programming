#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strcat - it concatenate two strings
 * @dest: is the first string value
 * @src: is the second string value
 * Return: as specified
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest + strlen(dest);

	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';

	return (dest);
}
