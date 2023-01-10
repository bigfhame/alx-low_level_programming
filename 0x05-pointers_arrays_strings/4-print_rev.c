#include "main.h"

/**
 *print_rev - print a string in reverse
 *
 *@s: string to print
 *
 *Return: void
 */

void print_rev(char *s)
{
	int b = 0;

	while (s[b] != '\0')
	{
		b++;
	}
	for (b -= 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
