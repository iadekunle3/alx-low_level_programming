#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - is the function to print string
 * @s: is the string pointer
 * Return: as specified
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		puts(*s);
		_puts_recursion(s + 1);
	}
	return(0);
}
