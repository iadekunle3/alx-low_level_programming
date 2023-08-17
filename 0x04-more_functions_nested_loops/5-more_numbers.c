#include "main.h"

/**
 * more_numbers - This is the main function
 * main - start here
 * Description: This is to print ten times alphabet
 * Return: Always as specified
 */
void more_numbers(void)
{
	int i;
	int j;

	i = 0;


	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
			j++;
		}

	_putchar('\n');
	i++;
	}
}
