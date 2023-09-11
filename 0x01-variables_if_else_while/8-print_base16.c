#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints all numbers of base 16 in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
    int num;
    char ch;

    for (num = '0'; num <= '9'; num++)
    {
        putchar(num);
    }

    for (ch = 'a'; ch <= 'f'; ch++)
    {
        putchar(ch);
    }

    putchar('\n');

    return (0);
}
