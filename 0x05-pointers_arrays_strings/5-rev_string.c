#include "main.h"

/**
* rev_string - Reverses a string.
* @s: The string to be reversed.
* Return: void.
*/
void rev_string(char *s)
{
int i = 0, j;
char temp;

while (s[i] != '\0')
i++;

j = 0;
i = i - 1;
while (j < i)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
j++;
i--;
}
}
