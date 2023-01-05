#include "main.h"
/**
 *print_line - print a line in terminal
 *
 *Return: always 0
 */
void print_line(int n);
{
	int a;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (a = 0; a < n; a++)
	{
	_putchar(98);	
	}
	_putchar('\n');
	}
}
