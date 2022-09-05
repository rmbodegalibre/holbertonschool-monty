#include "monty.h"

/**
 * main - monty
 * @argc: integer number of arguments
 * @argv: Array that contains arguments
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		/*Check for the file - if i get the path from argv*/
		/*		printf("First %s \n", argv[1]);*/
		open_file(argv[1]);
	}
	m_free();
	return (0);
}
