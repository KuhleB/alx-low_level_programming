#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Prints the sum of all its paramters.
 * @n: The number of paramters we pass in
 * @...:  variable number of paramters
 *
 * Return: If n == 0 return 0
 * else the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int p, sum = 0;

	va_start(args, n);

	for (p = 0; p < n; p++)
		sum += va_arg(args, int);

	va_end(args);
	return (sum);
}
