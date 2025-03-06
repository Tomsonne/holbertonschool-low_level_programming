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
	int i;

	i = 0;
	while(i < argc)
{
	printf("%s\n", argv[i]);
	i++;
}
	return (0);
}
