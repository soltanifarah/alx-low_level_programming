#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char ch;

	for (num = 0; num <= 9; num++)
		putchar(num + '0');
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
