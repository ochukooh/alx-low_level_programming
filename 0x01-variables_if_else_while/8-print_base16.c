#include <stdio.h>

/**
 * main - prints all HEX digits
 * Description: Prints all Hexadecimal digits with putchar
 * Return: returns zero
 */

int main(void)
{
int hexd;

for (hexd = 48; hexd <= 57; hexd++)
{
putchar(hexd);
}

for (hexd = 97; hexd <= 102; hexd++)
{
putchar(hexd);
}
putchar('\n');

return (0);
}
