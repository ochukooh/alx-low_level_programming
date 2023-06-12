#include<stdio.h>
#include "main.h"

/**
 * main - function
 * @argc: counts the argument
 * @argv: contains all parameter argument
 * Return: void
 */
int main(int argc __attribute__((unused)),char *argv[])
{
	printf("%s\n", *argv);
	return(0);
}	
