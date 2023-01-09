#include "main.h"
/**
 *swap_int - swaps value of int
 *@a: first to swap
 *@b: second to swap
 *Return: always 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
