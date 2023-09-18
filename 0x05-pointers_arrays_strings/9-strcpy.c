#include "main.h"

/**
* _strcpy - Copies the string pointed to by src :wq
* .
* @dest: The destination buffer.
* @src: The source string.
*
* Return: The pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i])
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';

return (dest);
}
