#include "main.h"

/**
 * _isalpha - main function of the code
 * @c: is the integer of the code
 * Return: As specified
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
