#include <ctype.h>
#include <stdio.h>
#include "main.h"
/**
 * cap_string - is the cap string function
 * @string: is the string value
 * Return: as specified
 */
char *cap_string(char *string)
{
	int i = 0;
	int capitalize_next = 1;

	while (string[i] != '\0')
	{
		if (string[i] == ' ' || string[i] == '\t' || string[i] == '\n' ||
		string[i] == ',' || string[i] == ';' || string[i] == '.' ||
		string[i] == '!' || string[i] == '?' || string[i] == '"' ||
		string[i] == '(' || string[i] == ')' || string[i] == '{' ||
		string[i] == '}')
		{
			capitalize_next = 1;
		}
		else if (capitalize_next)
		{
			string[i] = toupper(string[i]);
			capitalize_next = 0;
		}
		i++;
	}
	return (0);
}
