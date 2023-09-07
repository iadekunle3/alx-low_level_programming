#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - is the string to concatenate
 * @s1: is the first string
 * @s2: is the second string
 * @n: specifies the max number of char
 * Return: as specified
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}
	result = malloc(len1 + n + 1);
	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
		result[i]  = s1[i];
	for (j = 0; j < n; j++, i++)
		result[i] = s2[j];
	result[i] = '\0';

	return (result);
}
