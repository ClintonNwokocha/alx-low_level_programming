#include <stdio.h>
/**
 *  main - print its name, followed by a new line
 * @argc: count of command line arguments.
 * @argv: array that contains the command line argument.
 * Return: (0) when succesful
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
