#include "main.h"

/**
 * *_strncat - Concatenates @src to @dest
 * @src: the source string to append to @dest
 * @dest: the destiation string to be concatenated upon
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; scr[y] != '\0'; y++)
	{
		dest[x] = src[y];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
