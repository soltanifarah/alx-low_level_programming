#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The number of bytes to be used from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0, i = 0;

while (dest[dest_len])
dest_len++;

while (src[i] && i < n)
{
dest[dest_len] = src[i];
dest_len++;
i++;
}

dest[dest_len] = '\0';
return (dest);
}
