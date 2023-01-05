#include "main.h"
#include <stdio.h>
/**
 *more_numbers - numbers
 *
 *Return: always 0
 */
void more_numbers(void)
{
	int p, multi;

	for (p = 0; p < 10; p++)
	{
		for (multi = 0; multi <= 14; multi++)
		{
		if (multi > 9)
		{
		_putchar((multi / 10) + '0');
		}
		_putchar((multi % 10) + '0');
		}
		_putchar('\n');
	}
}
