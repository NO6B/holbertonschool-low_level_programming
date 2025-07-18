#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Executes calculator
 * @argc: Number of argument
 * @argv: Array of argument
 * Return: 0 on success exits with error code
 */
int main(int argc, char *argv[])
{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oprt = get_op_func(argv[2]);

	if (oprt == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
