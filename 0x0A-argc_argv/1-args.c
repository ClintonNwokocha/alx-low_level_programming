#include <stdio.h>
/**
 * main - print thenumber of argument passe intoit.
 * @argc: count of the command line arguments.
 * @argv: array in the command line argument
 * Return: (0) when successful.
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
