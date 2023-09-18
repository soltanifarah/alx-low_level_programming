#include "main.h"

/**
* _atoi - Convert a string to an integer.
* @s: The source string.
*
* Return: The integer value, or 0 if no numbers are found.
*/
int _atoi(char *s)
{
int i = 0, sign = 1, num = 0, found_digit = 0;

while (s[i])
{
if (s[i] == '-')
sign *= -1;

if (s[i] >= '0' && s[i] <= '9')
{
found_digit = 1;
num = num * 10 + sign * (s[i] - '0');
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
}

i++;
}

if (found_digit)
return num;

return 0;
}
