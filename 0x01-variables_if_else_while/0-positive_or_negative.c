#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point*
*
* Return: always 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
scanf("%d", &n);
printf("%d is positive");
}
else if (n < 0)
{
scanf("%d", &n);
printf("%d n is negative");
}
else
{
scanf("%d", &n);
printf("%d n is zero");
}
return (0);
}
