
#include <unistd.h>

/**
 * _putchar - puts a single character to stdout
 *
 * @c: character to print
 */

void _putchar(char c)
{
	write(1, &c, 1);
}
