#include "main.h"
#include <string.h>
#include <stddef.h>
/**
 * _strstr - is the function that locates string
 * @haystack: is the string to find
 * @needle: is the other value
 * Return: as specified
 */
char *_strstr(char *haystack, char *needle)
{
	size_t needle_len = strlen(needle);

	for (; *haystack; haystack++)
	{
		if (!strncmp(haystack, needle, needle_len))
		{
			return (haystack);
		}
	}
	return (NULL);
}
