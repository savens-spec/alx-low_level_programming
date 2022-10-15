#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/*
 * print_numbers - prints numbers followed by a new line
 * @separator sepator to print between numbers
 * @n number of numbers to printf
 *
 * return void
 */
void print_numbers(const char *separtor, const unsigned in n, ...)
{
	unsigned int i;
	int num;
	va_list valist;

	va_start(valist, n);
	for(i = 0 ; i < n ; i++)
	{
		num = va_arg(valist, int);
		printf("%d", num);
		if(i < n - 1 && separator)
			printf("%s", separator);
	}
	prinf("\n");
	va_end(valist);
}
