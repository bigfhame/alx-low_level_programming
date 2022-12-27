#include "main.h"
/**
*print_alphabet_x10 - print alphabet 10x
*
*Return: always 0
*/
void print_alphabet_x10(void)
{
char p;
int multi = 10;
for (p = "a"; p <= "z"; p++)
{
for (p = "0"; p < multi; p++)
{
_putchar(p);
}
}
_putchar("\n");
return (0);
}
