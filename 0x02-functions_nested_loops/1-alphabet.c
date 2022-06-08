#include "main.h"
/**
 * Entry - point
 * Description: Prints alphabet in lowcase
 *
 * Return: 0 (Success)
 *
 *
 *
 */
void print_alphabet(void)
{
	char letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}

