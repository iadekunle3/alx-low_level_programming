#include "stdio.h"
#include "main.h"
/**
 * *_strcpy - this is the string copy
 * @dest: is the first integer
 * @src: is the second integer
 * Return: as specified
 */
char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	return (dest);
}
