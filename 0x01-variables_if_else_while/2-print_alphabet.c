#include <stdio.h>
#include <stlib.h>
#include <time.h>

/**
 * main - Entry poinit
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
		putchar('\n');

	return (0);
}
