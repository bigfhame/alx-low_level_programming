#include <stdio.h>
#include <stdlib.h>
/**
 *_abs - absolute value of integer
 *parameter - int
 *Return: always 0
 */
int _abs(int)
{
printf("%d\n", abs(int));
return (0);
}
/**
 *main - Entry point
 *
 * Return: always (0)
 */
int main(void)
{
int r;
r = _abs(-1);
printf("%d\n", r);
r = _abs(0);
printf("%d\n", r);
r = _abs(1);
printf("%d\n", r);
r = _abs(-98);
printf("%d\n", r);
return (0);
}
