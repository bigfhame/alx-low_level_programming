#include "main.h"
/**
*print_alphabet_x10 - print alphabet 10x
*
*Return: always 0
*/
void print_alphabet_x10(void)
{
int p;
char o;
for (p = 0; p <= 9; p++)
{
for (o = 'a'; o <= 'z'; o++)
{
_putchar(o);
}
_putchar('\n');
}
}
