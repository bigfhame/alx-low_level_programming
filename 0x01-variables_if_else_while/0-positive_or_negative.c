#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if(n > 0)
{
printf("'n' is POSITIVE");
}
else if(n < 0)
{
printf("'n' is NEGATIVE");
}
else
{
printf("'n' is ZERO");
}
return (0);
}
