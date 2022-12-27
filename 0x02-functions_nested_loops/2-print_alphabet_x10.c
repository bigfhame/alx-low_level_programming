#include "main.h"
/**
*print_alphabet_x10 - print alphabet 10x
*
*Return: always 0
*/
void print_alphabet_x10(void)
{
int p;
int o = 10;
for (p = 'a'; p <= 'z'; p++)
{
while (p < o)
{
_putchar(p + '0');
}
}
_putchar('\n');
}
