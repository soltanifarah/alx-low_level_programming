#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - checks if a string is a number
 * @s: string to check
 *
 * Return: 1 if string is a number, 0 otherwise
 */
int is_number(char *s)
{
    int i = 0;

    while (s[i])
    {
        if (!isdigit(s[i]))
            return (0);
        i++;
    }
    return (1);
}

/**
 * main - adds positive numbers.
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 *
 * Return: 0 if success, 1 if error
 */
int main(int argc, char *argv[])
{
    int i, num, sum = 0;

    for (i = 1; i < argc; i++)
    {
        if (is_number(argv[i]))
        {
            num = atoi(argv[i]);
            sum += num;
        }
        else
        {
            printf("Error\n");
            return (1);
        }
    }

    printf("%d\n", sum);
    return (0);
}
