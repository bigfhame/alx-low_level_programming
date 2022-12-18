#include <stdio.h>
#include <stdlib.h>
/**
*main - Entry point
*
*Return: always 0
*/
int main(void)
{
int d = 0;
char h = 'a';
while (d < 10)
{
putchar(d + '0');
d++;
}
while (h < 'g')
{
putchar(h);
h++;
}
putchar('\n');
return (0);
}
