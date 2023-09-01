#include "main.h"
#include <stdio.h>
/**
 * _strncpy - is the main function
 * @dest: is the first string value
 * @src: is the second string value
 * @n: is the third string value to copy
 * Return: as specified
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
