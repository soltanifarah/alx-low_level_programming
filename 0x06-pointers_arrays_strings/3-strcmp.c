#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Function that compares two strings.
 * @s1: type str
 * @s2: type str
 * Return: Integer difference between the ASCII values
 * of the first different characters, or 0 if the strings are identical.
 */
int _strcmp(char *s1, char *s2)
{
int a;

for (a = 0; s1[a] != '\0' && s2[a] != '\0'; a++)
{
if (s1[a] != s2[a])
return (s1[a] - s2[a]);
}
return (0);
}
