#include "main.h"
#include <string.h>
/**
 * _strncat - is the function to cat string
 * @dest: is the first defined integer
 * @src: is the second integer value
 * @n: is the third value
 * Return: as specified
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
