#include <stdlib.h>
#include "main.h"

/**
 * *array_range - create an array of integers
 * @min: minimum range of value stored
 * @max: maximum range of values stored and number of elements
 *Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (min > max)
		return (NULL);
	ar = malloc(sizeof(*ar) * ((max - min) + 1);
	if (ar == NULL)
		return (NULL);
	for (i = 0; min <= max; i++; min++)
	a[i] = min;
	return (ar);
}
