#include <stdio.h>
#include <math.h>

/**
* main - find and print the largest prime factor of 612852475143
* Return: 0
*/

int main(void)
{
unsigned long int num = 612852475143;
unsigned long int divisor = 2, largest;

while (num % divisor == 0)
{
num /= divisor;
}

for (divisor = 3; divisor <= sqrt(num); divisor += 2)
{
while (num % divisor == 0)
{
largest = divisor;
num /= divisor;
}
}

if (num > 2)
{
largest = num;
}

printf("%lu\n", largest);
return (0);
}
