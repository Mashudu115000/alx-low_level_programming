#include "variadic_functions.h"

/**
 * print_strings - that prints string, followed by a new line
 *
 * @separator: string to be printed between strings
 *
 * @n: number of strings passed to the function
 *
 * Return: string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list pa;

	va_start(pa, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(pa, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(pa);
}
