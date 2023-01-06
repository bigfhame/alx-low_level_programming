#include <unistd.h>
/**
 *_putchar - my putchar
 *
 */
int _putchar(char c)
{
	return write(STDOUT_FILENO, &c, 1);
}
