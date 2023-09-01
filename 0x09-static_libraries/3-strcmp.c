#include "main.h"
#include <stdio.h>
/**
 * _strcmp - is the main function
 * @s1: is the first string to compare
 * @s2: is the second string to compare
 * Return: as specified
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0');
		return (0);
	}
	return (s1[i] - s2[i]);
}
