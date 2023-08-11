#include <stdio.h>

/**
 * main - main function
 * Description:  This is the main description
 * Return: always 0 when success
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
