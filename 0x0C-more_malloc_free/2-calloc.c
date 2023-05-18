#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills memory with constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 * Return: pointer to be allocated memory.
 */
int *array_range(int min, int max)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] =  b;

	}
	return (s);
}

/**
 * _calloc - allocates memory fo an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to allocate memory
 */
int *array_range(int min, int max)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
