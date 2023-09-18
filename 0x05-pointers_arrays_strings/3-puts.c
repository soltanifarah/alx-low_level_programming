#include <unistd.h>

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to be printed.
 * Return: On success, 1. On error, -1.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
