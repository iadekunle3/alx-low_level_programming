#include <stdio.h>
/**
 * main - print alhabets except q and e
 *
 * Description: This is a print task
 * Return: always (0) success
 * 
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'q' && alphabet != 'e')
		{
			putchar(alphabet);
		}
		alphabet++;
	}
	putchar('\n');
	return (0);
}
