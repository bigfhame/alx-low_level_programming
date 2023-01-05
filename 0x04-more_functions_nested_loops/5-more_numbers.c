#include "main.h"
#include <stdio.h>
/**
 *more_numbers - numbers
 *
 *Return: always 0
 */
void more_numbers(void)
{
	int p;
	char multi;
	for (p = 0; p <= 14; p++)
	{
		for (multi = 'a'; multi <= 'z'; multi++)
		{
		_putchar(multi);
		_putchar("\n");
		}
	}
}
