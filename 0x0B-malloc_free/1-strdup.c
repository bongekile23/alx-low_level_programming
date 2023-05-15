#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - copies the string given as parameter
 * @str: string go duplicate
 * Return: pointer to the copied string(succrss), NULL(error)
 */
char *_strdup(char *str)
{
	char *aaa;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	aaa = malloc(sizeof(char) * (i + 1));
	if (aaa == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		aaa[r] = str[r];
		return (aaa);
}
