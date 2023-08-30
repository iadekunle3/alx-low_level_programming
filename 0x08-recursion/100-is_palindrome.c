#include <stdbool.h>
#include <string.h>
#include "main.h"
/**
 *
 *
 */

bool is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (0);
	}

	if (s[start] == s[end])
	{
		return (is_palindrome_helper(s, start + 1, end - 1));
	}
	else
	{
		return false;
	}
}

int is_palindrome(char *s)
{
	int length = strlen(s);
	return (is_palindrome_helper(s, 0, length - 1));
}

