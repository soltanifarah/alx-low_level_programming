#include "main.h"

/**
* print_rev - Prints a string in reverse followed by a new line.
* @s: The string to be printed in reverse.
* Return: void.
*/
void print_rev(char *s)
{
int length = 0;

while (*s)
{
s++;
length++;
}
s--;
while (length)
{
_putchar(*s);
s--;
length--;
}
_putchar('\n');
}
