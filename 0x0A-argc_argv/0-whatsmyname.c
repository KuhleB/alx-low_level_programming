#include <stdio.h>

/**
 * main - prints the program name
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0 on success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
