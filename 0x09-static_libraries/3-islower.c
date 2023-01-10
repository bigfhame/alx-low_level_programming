#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*_islower - check for lowercase character
*@c: character to check
*Return: always 0
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
