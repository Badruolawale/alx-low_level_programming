#include <stdio.h>
/**
 * main - print out data size c
 * Return: 0
 */
int main(void)
{
	char v;
	int w;
	long int x;
	long long int y;
	float z;

	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(v));
	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(w));
	printf("Size of long int: %lu byte(s)\n", i(unsigned long)sizeof(x));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(y));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(z));
	return (0);
}
