#include "main.h"

/**
 * print _rev prints a string in reverse and a new line
 * @s: the used string reference pointer
 * Return: 0
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
