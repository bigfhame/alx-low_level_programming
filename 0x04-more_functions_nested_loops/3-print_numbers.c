#include "main.h"
#include <stdio.h>
/**
 *print_numbers - print integer
 *
 *Return: always 0
 */
void print_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar("\n");
}
