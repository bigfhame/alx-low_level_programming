#include "main.h"
#include <stdio.h>
/**
*_islower - check for lowercase character
*
*Return: always 0
*/
int _islower(int c)
{
int low;
low = _islower('A');
_putchar(low + '0');
low = _islower('z');
_putchar(low + '0');
return (0);
}
