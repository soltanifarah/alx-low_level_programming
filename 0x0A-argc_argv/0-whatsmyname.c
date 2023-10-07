#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
    (void)argc;  /* Unused parameter */
    printf("%s\n", argv[0]);
    return (0);
}
