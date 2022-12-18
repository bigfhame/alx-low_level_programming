#include <stdio.h>
#include <stdlib.h>
/**
*main - Entry point
*
*Return: always 0
*/
int main(void)
{
char lc = 'z';
while (lc >= 'a')
{
putchar(lc);
lc--;
}
putchar('\n');
return (0);
}
