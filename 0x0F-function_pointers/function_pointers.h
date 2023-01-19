#ifndef _HEADER_
#define _HEADER_
#include <stdlib.h>
void print_name(char *name, void (*f)(char *));i
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
