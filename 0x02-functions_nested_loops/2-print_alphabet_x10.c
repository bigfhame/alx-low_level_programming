#include "main.h"
/**
*print_alphabet_x10 - print alphabet 10x
*
*Return: always 0
*/
void print_alphabet_x10(void)
{
char p;
char multi = 10;
for (p = 'a'; p <= 'z'; p++)
{
while (p < multi)
{
p++;
_putchar(p);
}
}
_putchar('\n');
}
