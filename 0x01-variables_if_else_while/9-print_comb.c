#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 with commas and spaces.
 * Description: This is the number with commas and spaces
 * Return: Always 0 (positive mindset)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
