#include "main.h"
/**
 * _strlen: is the check the string length
 * @s: is the integer used
 * return: as specified
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return length;
}
