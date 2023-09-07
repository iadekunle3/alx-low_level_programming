#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * is_digit - is the function to check for digits
 * @s: is the user input
 * Return: as specified
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (!isdigit(s[i]))
			return (0);
			i++;
	}
	return (1);
}
/**
 * _strlen - is the function to find strlen
 * @s: is the user input
 * Return: as specified
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * errors - is used to check error input
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - is the function to check inputs
 * @argc: is the arguement count
 * @argv: is the argument array
 * Return: as specified
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
	errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);

	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
	result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
	for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
	{
		digit2 = s2[len2] - '0';
		carry += result[len1 + len2 + 1] + (digit1 * digit2);
		result[len1 + len2 + 1] = carry % 10;
		carry /= 10;
	}
	if (carry > 0)
		result[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
	if (result[i])
		a = 1;
	if (a)
		printf("%d", result[i]);
	}
	if (!a)
		printf("0");
	printf("\n");
	free(result);
	return (0);
}

