#include "main.h"
/**
*print_alphabet - prints the alphabet in lowercase, followed by a new line.
*
*Return: always 0
*/
void print_alphabet(void)
{
char p = 'a';
while (p <= 'z')
{
_putchar(p);
p++;
}
_putchar('\n');
}
