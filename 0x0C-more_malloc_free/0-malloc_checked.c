#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - To give memory using malloc
 * @b: number of bytes to give
 *
 * Return: a pointer to the given memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
