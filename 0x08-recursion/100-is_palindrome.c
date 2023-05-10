#include "main.h"

int is_palindrome(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
	len += find_strlen(s + len);
	}
	return (len);
}
