#include <stdbool.h>
#include <string.h>
#include "main.h"
/**
 * is_palindrome_helper - is the empty string
 * @s: is the string checked
 * @start: is the first search
 * @end: is the end search
 * Return: as specified
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
		return (0);
	}
}
/**
 * is_palindrome - is the recursive
 * @s: is the string
 * Return: as specified
 */
int is_palindrome(char *s)
{
	int length = strlen(s);
	return (is_palindrome_helper(s, 0, length - 1));
}
