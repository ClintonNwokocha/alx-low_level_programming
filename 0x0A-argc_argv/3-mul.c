#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers, followed by a new line.
 * @argc: Argument count
 * @argv: Argument vector
 * Return: (1) if not successful or (0) if successful
 */
int main(int argc, char **argv)
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%d\n", num1 * num2);
	return (0);
}
