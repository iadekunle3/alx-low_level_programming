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
	int i;
	while(str[i])
	{
		if(('a' <= str[i] && str[i] <= 'm') || ('A' <= str[i] && str[i] <= 'M'))
		{
			str[i] += 13;       
		}
		else if(('n' <= str[i] && str[i] <= 'z') || ('N' <= str[i] && str[i] <= 'Z'))
		{
			str[i] -= 13;
		}
	}
	return (str);
}

