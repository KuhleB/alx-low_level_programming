#include <stdio.h>
/**
  * main - Print Message
  * Return: 0
  */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(a));
	printf("Size of an int: %d byte(s)\n", sizeof(b));
	printf("Size of a long in: %d byte(s)\n", sizeof(c));
	printf("Size of a long long int: %d byte(s)\n", sizeof(d))
	printf("Size of float: %d byte(s)\n", sizeof(f));
	return (0);
}
