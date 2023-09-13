#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - is the function to print name
 * @name: is the user input
 * @f: is the pointer to the character
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
/**
 * print_function - is the function that print name as it is
 * @name: is the user input
 */
void print_function(char *name)
{
	printf("%s\n", name);
}
