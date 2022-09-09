#include <stdio.h>

/**
 * main - print ht e string in the put function
 *
 * Description: using the main function
 * this program prints " prints the size of various types on the computer it is compiled and run on"
 * return 0
 */
int main(void)
{
	char a;
	int b;
	long c;
	long long d;
	float f;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a lonf long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
