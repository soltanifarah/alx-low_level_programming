#include "main.h"

/**
* print_triangle - prints a triangle using the # character.
* @size: size of the triangle.
*
* Return: void.
*/
void print_triangle(int size)
{
int i, j, space;

for (i = 0; i < size; i++)
{
for (space = size - i - 1; space > 0; space--)
_putchar(' ');
for (j = 0; j <= i; j++)
_putchar('#');
_putchar('\n');
}

if (size <= 0)
_putchar('\n');
}
