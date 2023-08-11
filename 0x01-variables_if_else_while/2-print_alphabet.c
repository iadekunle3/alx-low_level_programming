#include <stdio.h>

/**
 * main - Prints alphabet  between a to z
 *
 * Description: To print all alphabets from a to z
 * Return: Always 0 (Success)
 */
int main(void)
{
	char g;

	for (g = 'a'; g <= 'z'; g++)
	{
		putchar(g);
	}
	putchar('\n');
	return (0);
}
