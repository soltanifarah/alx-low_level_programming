#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the alphabet in lowercase except 'q' and 'e'.
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}
	putchar('\n');

	return (0);
}
