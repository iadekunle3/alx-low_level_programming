#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rot13 - is used to encode a string
 * @str: is the encoded string
 * Return: as specified
 */
char *rot13(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i])
	{
		j = 0;
		while (j < 13)
		{
			if ((str[i] >= 'a' && str[i] < 'z') || (str[i] >= 'A' && str[i] < 'Z'))
			{
				str[i]++;
			}
			else if (str[i] == 'z')
			{
				str[i] = 'a';
			}
			else if (str[i] == 'Z')
			{
				str[i] = 'A';
			}
			j++;
		}
		i++;
	}
	return (str);
}
