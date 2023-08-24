#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * leet - is the function to encode strings
 * @str: is the string value
 * Return: as specified
 */
char *leet(char *str)
{
	int i = 0;
	int j = 0;
	char leet[] = "4433007711";
	char letter[] = "aAeEoOtTlL";

	while (str[i])
	{
		j = 0;
		while (letter[j])
		{
			if (str[i] == letter[j])
			{
				str[i] = leet[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}

