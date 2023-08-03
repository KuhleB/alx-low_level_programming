#include "main.h"

int actual_prime(int n, int p);

/**
 * is_prime_number - returns 1 if the input integer is a prime no
 * otherwise return 0
 * @n: input number
 * Return: 1 if n is a prime no and 0 if n is even
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
  * actual_prime - checks if number is prime
  * @n: input number
  * @p: iterator
  * Return: 1 if n is a prime and 0 if n is not
  */

int actual_prime(int n, int p)
{
	if (p == 1)
	return (1);
	if (n % p == 0 && p > 0)
		return (0);
	return (actual_prime(n, p - 1));
}
