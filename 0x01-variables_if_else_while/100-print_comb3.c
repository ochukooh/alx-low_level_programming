#include <stdio.h>

/**
 * main - prints all comcination of single digits
 * Description: Prints all Hexadecimal digits with putchar
 * Return: returns zero
 */

int main(void)
{
int hexd;

for (hexd = 48; hexd <= 57; hexd++)
{
putchar(hexd);

if (hexd < 57)
{
putchar(44);
putchar(32);
}

}

putchar('\n');

return (0);
}
