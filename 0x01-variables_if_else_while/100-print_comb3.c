#include <stdio.h>
#include <unistd.h>
/**
 * main - Enter point
 * prints two digits combination
 * Return: Always 0 (success)
 */
int main(void)
{
	int c, i;

	for (i = '0'; c <= '9' ; c++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			if (c < i)
			{
				putchar(c);
				putchar(i);

				if (c != 'g' || (c == '8' && i != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
