#include "main.h"
/**
 * prime_a - is the main function
 * @n: is the user input
 * Return: as specified
 *
 */
int prime_a(int n)
{
	int i = 2;

	if (n <= 1)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	if(n % i == 0)
		return (0);
	return (prime_a(n, i + 1);
}
