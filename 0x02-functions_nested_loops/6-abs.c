#include "main.h"
#include <stdio.h>

/**
 * _abs - Computes the absolute value of an integer
 *
 * Return: The absolute value of number or 0
 */
int _abs(int s)

{
	if (s < 0)
	{
		int abs_val;

		abs_val = s * (-1);
		return (abs_val);
	}
	return (s);
}
