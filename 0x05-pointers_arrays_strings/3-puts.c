#include "main.h"

/**
 *_puts - returns a string to STDOUT
 *@str: string to print
 *
 *Return: a string
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
