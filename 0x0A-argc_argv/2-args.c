#include <stdio.h>

/**
 * main - prints all arguments received
 * @argc: the argument count
 * @argv: the argument vector
 * Return: o on success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);
	return (0);
}
