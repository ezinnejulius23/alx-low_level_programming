#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Adds positive numbers
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 if success, 1 if fail
 */

int main(int argc, char *argv[])
{
	int sumResult = 0, i = 1, j;

	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		i++;
	}

	if (argc != 1)
	{
		i = 1;
		while (i < argc)
		{
			if (atoi(argv[i]) >= 0)
			{
				sumResult += atoi(argv[i]);
			}
			i++;
		}
	}
	printf("%i\n", sumResult);
	return (0);
}
