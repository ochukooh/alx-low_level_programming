#include<stdio.h>
#include "main.h"

/**
 * main - function
 * @argc: argument 
 * @argv: argumenr
 * Return: void
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return(0);
}
