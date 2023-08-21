#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - is the main function
 * @s: is the integer used
 */
void print_rev(char *s)
{
	char *ptr = s + strlen(s) - 1;

	while (ptr >= s)
	{
		putchar(*ptr);
		ptr--;
	}
	putchar ('\n');
}
