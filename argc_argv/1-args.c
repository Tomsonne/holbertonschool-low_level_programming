#include "main.h"
#include <stdio.h>

/**
  * main - Prints its name
  * @argc: argument
  * @argv: argument
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
