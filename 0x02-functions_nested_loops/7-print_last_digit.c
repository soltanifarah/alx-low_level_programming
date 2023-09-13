#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: input integer
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
int last_digit = n % 10;   /* This will give the last digit */

if (last_digit < 0)
{
last_digit = -last_digit;  /* Convert to positive if negative */
} 

_putchar('0' + last_digit);  /* Print the last digit */    
return (last_digit);
}
