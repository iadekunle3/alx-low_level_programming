#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - is the main function
 * @s: is the reversed string
 * Return: as specified
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
