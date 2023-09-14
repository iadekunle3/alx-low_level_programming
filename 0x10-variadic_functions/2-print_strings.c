#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - is the function to print str
 * @separator: is used to separate strings
 * @n: is the string used
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);
		printf("%s", str ? str : "(nil)");
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(args);
}

