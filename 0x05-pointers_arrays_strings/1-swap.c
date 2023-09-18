#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 * Return: void.
 */
void swap_int(int *a, int *b)
{
int temp;

temp = *a;  /* Store the value pointed to by 'a' in 'temp' */
*a = *b;    /* Set the value pointed to by 'a' to the value pointed to by 'b' */
*b = temp;  /* Set the value pointed to by 'b' to 'temp' (original value of 'a') */
}
