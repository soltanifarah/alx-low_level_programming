#include "main.h"

/**
 * main - Prints "_putchar" followed by a newline.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
    char str[] = "_putchar\n";
    int i;

    for (i = 0; str[i]; i++)
    {
        _putchar(str[i]);
    }

    return (0);
}
