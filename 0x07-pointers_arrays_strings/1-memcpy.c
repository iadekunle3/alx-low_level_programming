#include "main.h"
#include <string.h>
/**
 * _memcpy - is the main function to copy
 * @dest: is the destination file
 * @src: is the source file
 * @n: is the user input value
 * Return: as specified
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
