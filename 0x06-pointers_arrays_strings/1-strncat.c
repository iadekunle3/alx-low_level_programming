#include "main.h"
#include <stdio.h>
/**
 * _strncat - is the function to cat string
 * @dest: is the first defined integer
 * @src: is the second integer value
 * @n: is the third value
 * Return: as specified
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
	{
		for (y = 0; src[y] != '\0' && y < n; y++)
		{
			dest[x + y] = src[y];
			dest[x + y] = '\0';
		}
	}
	return (dest);
}
