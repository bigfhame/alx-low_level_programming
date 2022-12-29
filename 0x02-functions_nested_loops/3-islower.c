#include "main.h"
#include <stdio.h>
/**
*_islower - check for lowercase character
*
*Return: always 0
*/
int _islower(int c)
{
char low;
c = 'A';
low = _islower(c);
_putchar(low + '0');
return (0);
}
