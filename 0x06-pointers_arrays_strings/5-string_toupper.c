#include "main.h"

/**
 * *string_toupper changes lowercase letters off a string to uppercase.
 * @str: The string to be changed.
 * 
 * Return 0
 */
char *string_toupper(char *)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (start);
}
