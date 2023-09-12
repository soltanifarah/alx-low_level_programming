#include <stdio.h>

/* Prototype for the _putchar function */
int _putchar(char c);

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
