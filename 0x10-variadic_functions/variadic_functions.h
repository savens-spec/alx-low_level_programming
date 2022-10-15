#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdarg.h>
#include <stdio.h>
/*
 * struc printf - print type with corresponding print function
 * @t; print type
 * @t; print function
 */

int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /*_VARIADIC_FUNCTIONS_H_*/
