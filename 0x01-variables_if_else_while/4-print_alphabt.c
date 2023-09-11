#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except q and e
 * Return: 0 if successful
 */
int main(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        if (letter != 'q' && letter != 'e')
        {
            putchar(letter);
        }
    }

    putchar('\n');

    return (0);
}
