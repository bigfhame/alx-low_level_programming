#include "main.h"
/**
 *print_last_digit - last digit
 *@n: number to get last digit
 *Return: always 0
 */
int print_last_digit(int n)
{
	int las;
	las = n % 10;
	if (las < 0)
	{
	las = las * -1;	
	}
	_putchar(las + '0');
	return (las);
}
