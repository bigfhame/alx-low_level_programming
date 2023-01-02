#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
*_islower - check for lowercase character
*Return: always 0
*/
int _islower(int c)
{
char p = 'a';
if (p <= 'z')
{
	putchar(1);
}
else
{
putchar(0);
}
}
/**
 *main - Entry point
 *
 *Return: always 0
 */
int main(void)
{
int po;
po = _islower('H');
_putchar(po + '0');
return (0);
}
