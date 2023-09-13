#include "main.h"

/**
 * print_alphabet - Prints the alphabet, in lowercase, followed by an \n.
 */

void print_alphabet(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
