#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 * @n: character to be checked
 * Return: 1 and print + if n is greater than 0, 0 Print 0 if n is zero
 * return -1 - print -1 if n is less than 0
 */

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
