#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char generate_random_char(void)
{
/* Generate a random character. 
Modify for crackme program requirements. */
return (rand() % (126 - 33 + 1)) + 33;
}

int main(void)
{
int password_length = 10;
char password[password_length + 1];

srand(time(NULL));

while (1)
{
for (int i = 0; i < password_length; i++)
password[i] = generate_random_char();
password[password_length] = '\0';
printf("%s\n", password);
if (/* Some criteria to check if password is valid */)
break;
}
return 0;
}
