#include <stdio.h>

/**
 * main - print single digit numbers
 * Description: Prints single digit numbers using putchar
 * Return: returns zero
 */


int main(void)
{

int digit;

for (digit = 48; digit <= 57; digit++)
{
putchar(digit);
}
putchar('\n');
return (0);
}
