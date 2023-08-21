#include "main.h"
#include <string.h>
/**
 * rev_string - reverse string function
 * @s: is the string used by users
 */
void rev_string(char *s)
{
	int n = strlen(s);
	int j = 0;

	while (j < n / 2)
	{
		char rev = s[j];

		s[j] = s[n - j - 1];
		s[n - j - 1] = rev;
		j++;
	}
}
