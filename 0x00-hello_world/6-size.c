#include<stdio.h>
/**
 *main-Entry point
 *
 *Return: always 0
 */
int main(void)
{
int integerType;
float floatType;
char charType;
long int longintType;
long long int longlongintType;
printf("int is: %ld bytes\n", sizeof(int));
printf("float is: %ld bytes\n", sizeof(float));
printf("long int is: %ld bytes\n", sizeof(long int));
printf("char is: %ld byte\n", sizeof(char))
printf("long long int is: %ld bytes\n", sizeof(long long int));
return (0);
}

