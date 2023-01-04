#include "main.h"
/**
 *print_to_98 - Entry point
 *@n: natural numbers
 *Return: always 0
 */
void print_to_98(int n)
{
n = 0;
while  (n <= 98)
{
_putchar(n + '0');
n++;
}
_putchar(',');
_putchar(' ');
return (0);
}
