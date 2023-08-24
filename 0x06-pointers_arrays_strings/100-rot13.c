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
	for(int i = 0; str[i]; i++)
	{
	if(('a' <= str[i] && str[i] <= 'm') || ('A' <= str[i] && str[i] <= 'M'))
	{
		str[i] += 13;       
	}
	else if(('n' <= str[i] && str[i] <= 'z') || ('N' <= str[i] && str[i] <= 'Z'))
	{
		str[i] -= 13;
	}
	return (str);
}

