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
printf("Size of int: %ld bytes\n", sizeof(integerType));
printf("Size of float: %ld bytes\n", sizeof(floatType));
printf("Size of long int: %ld bytes\n", sizeof(longintType));
printf("Size of char: %ld byte\n", sizeof(charType));
printf("size of long long int: %ld bytes\n", sizeof(longlongintType));
return (0);
}

