#include <stdio.h>
#include "main.h"
/**
*main - alphabet in lowercase
*
*Return: always 0
*/
int main(void)
{char print_alphabet = 'a';
for (print_alphabet = 'a'; print_alphabet <= 'z'; print_alphabet++)
{
putchar(print_alphabet);
}
putchar('\n');
return (0);
}
