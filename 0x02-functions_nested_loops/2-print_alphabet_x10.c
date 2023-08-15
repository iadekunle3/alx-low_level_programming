#include "main.h"

/**
 * print_alphabet - This is the main function
 * main - start here
 * Description: This is to print ten times alphabet
 * Return: Always as specified
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
