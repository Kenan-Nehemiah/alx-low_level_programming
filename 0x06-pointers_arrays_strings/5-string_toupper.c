#include "main.h"

/**
 * *string_toupper - changes lowercase letters 
 * off a string to uppercase.
 * @str: The string to be changed.
 * 
 * Return 0
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
