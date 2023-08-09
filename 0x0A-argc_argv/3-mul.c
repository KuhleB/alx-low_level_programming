#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: the argument count
 * @argv: the argument vector
 * Return: o on success
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
{
	printf("%s\n", "Error");
	return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
