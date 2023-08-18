#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line
 *
 * @separator: The string to be printed between numbers
 *
 * @n: number of parameters
 *
 * Return: number to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list pa;

	va_start(pa, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(pa, int);
		printf("%d", num);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(pa);
}
