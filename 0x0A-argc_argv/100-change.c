#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the minimum number of coins to make change for money.
 * @argc: Argument count
 * @argv: Argument Vector
 * Return: (1) if argument more than 1 and (0) if other wise.
 */
int main(int argc, char **argv)
{
	int cents;
	int coins;
	int denominations[] = {25, 10, 5, 2, 1}; 
	int size;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
	}
	coins = 0;
	size = sizeof(denominations) / sizeof(denominations[0]);

	for (i = 0; i < size; i++)
	{
		if (cents >= denominations[i])
		{
			cents -= denominations[i];
			coins++;
		}
	}
	printf("%d\n", coins);
	return (0);
}
