#include<stdio.h>
#include "main.h"
/**
 * main - function
 * @argc: count
 * @argv: array
 * Return: void
 */
int main(int argc, char **argv)
{
	int x, y;

	if (argc < 3)
	{
		printf("Error\n");
		return(1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", x * y);
	return(0);
}
