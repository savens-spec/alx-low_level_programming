#include "main.h"
#include <stdio.h>

/*
 * malloc_checked - allocates memory using malloc
 * @b: memory to allocate
 *
 * return: pointer to allocated memory or normal process termination if error
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (p == NULL)
		exit(98);

	return (ptr);
}
