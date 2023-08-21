#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - is to print half of string
 * @str: is the string user value
 */
void puts_half(char *str)
{
	int n = strlen(str);
	int first = n / 2;
	int i = first;

	if (n % 2 != 0)
	{
		first = (n - 1) / 2;
	}
	while (i < n)
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
