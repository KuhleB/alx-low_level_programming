#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - A function that prints numbers
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 * @...: variable number of parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int p;

	va_start(args, n);

	for (p = 0; p < n; p++)
	{
		printf("%d", va_arg(args, int));

		if (p != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
