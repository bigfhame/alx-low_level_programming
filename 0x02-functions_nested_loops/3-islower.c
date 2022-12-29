#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
*_islower - check for lowercase character
*r
*Return: always 0
*/
int _islower(int c)
{
c = 65;
if (islower(c))
{
return (1);
}
else
{
return (0);
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
