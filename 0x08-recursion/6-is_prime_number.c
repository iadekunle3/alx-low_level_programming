#include "main.h"
/**
 * is_prime_number - is the main function
 * @n: is the user input
 * Return: as specified
 *
 */
int is_prime_number(int n)
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
	return (is_prime_number(n, i + 1);
}
