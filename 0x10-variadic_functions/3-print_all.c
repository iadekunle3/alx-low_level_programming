#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - is a function that print all element
 * @format: is used to format
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	char *fmt = (char *)format;
	char c;

	va_start(args, format);

	while (*fmt)
	{
		switch (*fmt++)
		{
			case 'c':
			c = (char)va_arg(args, int);
			printf("%c", c);
			break;
			case 'i':
			printf("%d", va_arg(args, int));
			break;
			case 'f':
			printf("%f", (float)va_arg(args, double));
			break;
			case 's':
			str = va_arg(args, char*);
			printf("%s", str ? str : "(nil)");
			break;
		}
		if (*(fmt) && (*fmt == 'c' || *fmt == 'i' || *fmt == 'f' || *fmt == 's'))
		{
			printf(", ");
		}
	}

	printf("\n");

	va_end(args);
}

