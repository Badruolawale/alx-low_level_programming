#include <stdio.h>
/*
 * size
 * Print
 * Return: 0
*/
int main(void)
{
	char v;
	int w;
	long int x;
	long long int y;
	float z;

	printf("Size of a char: %c byte\n", sizeof(v));
	printf("Size of a int: %c bytes\n", sizeof(w));
	printf("Size of a long int: %c bytes\n", sizeof(x));
	printf("Size of a long long int: %c bytes\n", sizeof(y));
	printf("Size of a float: %c bytes\n", sizeof(z));
	return (0);
}
