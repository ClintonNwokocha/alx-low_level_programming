#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: Performs simple operations (+, -, *, /, %) on two integers.
 * Usage: calc num1 operator num2
 * num1 and num2 are integers.
 * operator is one of: +, -, *, /, %.
 * Error cases:
 * - If the number of arguments is wrong, exits with status 98.
 * - If the operator is none of the above, exits with status 99.
 * - If trying to divide by 0, exits with status 100.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op_func = get_op_func(argv[2]);
	if (!op_func)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = op_func(num1, num2);
	printf("%d\n", result);
	return (0);
}
