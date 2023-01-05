#include "main.h"
/**
 *times_table - print times table
 *
 *Return: always 0
 */
void times_table(void)
{
	int x, y, z, b, d;

	for (x = 0; x <= 9; x++)
	{
	for (y = 0; y <= 9; y++)
	{
	z = x * y;
	if (z > 9)
	{
	b = z % 10;
	d = (z - b) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(d + '0');
	_putchar(b + '0');
	}
	else
	{
	if (y != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(z + '0');
	}
	}
	_putchar('\n');
	}
}
