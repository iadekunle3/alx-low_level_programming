#include <stdio.h>
#include <string.h>
/**
 * infinite_add - is the function that adds two int
 * @n1: is the first number
 * @n2: is the second number
 * @r: is the buffer for storage
 * @size_r: is the buffer size
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, n, len1, len2, carry = 0;

	len1 = strlen(n1);
	len2 = strlen(n2);

	for (i = len1 - 1, j = len2 - 1, n = 0; i >= 0 || j >= 0 || carry; i--, j--, n++)
	{
		if (n >= size_r - 1)
		return (0);

		r[n] = carry + '0';
		if (i >= 0)
		r[n] += n1[i] - '0';
		if (j >= 0)
		r[n] += n2[j] - '0';

		carry = r[n] > '9';
		if (carry)
		r[n] -= 10;
	}

	r[n] = '\0';

	for (i = 0; i < n / 2; i++)
	{
		char c = r[i];
		r[i] = r[n - i - 1];
		r[n - i - 1] = c;
	}

	return (r);
}

