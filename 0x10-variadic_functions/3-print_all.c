#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - A funtion that prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int a = 0;
	char *all, *s = "";

	va_start(args, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
				printf("%s%c", s, va_arg(args, int));
				break;
				case 'i':
				printf("%s%d", s, va_arg(args, int));
				break;
				case 'f':
				printf("%s%f", s, va_arg(args, double));
				break;
				case 's':
				all = va_arg(args, char *);
				if (!all)
					all = "(nil)";
				printf("%s%s", s, all);
				break;
				default:
				a++;
				continue;
			}
			s = ", ";
			a++;
		}
	}
	printf("\n");
	va_end(args);
}
