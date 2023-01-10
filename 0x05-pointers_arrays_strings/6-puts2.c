#include "main.h"

/**
 *puts2 - function that prints every other character
 *
 *@str: string to display
 *
 *Return: void
 */

void puts2(char *str)
{
	int d;
	int e = 0;

	while (str[e] != '\0')
	{
		e++;
	}
	for (d = 0; d < e; d += 2)
	{
		_putchar(str[d]);
	}
	_putchar('\n');
}
