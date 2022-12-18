#include <stdio.h>
#include <stdlib.h>
/**
*main - Entry point
*
*Return: always 0
*/
int main(void)
{
char d = 0;
char h = 'a';
while (d < 10)
{
putchar(d);
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
