#include <stdlib.h>
#include "main.h"
/**
 * _strdup - is the function that returns pointer
 * @str: is the string used
 * Return: as specified
 */
char *_strdup(char *str)
{
	char *new_str;
	int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len])
	{
		len++;
	}
	new_str = malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		new_str[i] = str[i];
	}
	new_str[len] = '\0';

	return (new_str);
}

