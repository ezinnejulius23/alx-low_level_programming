#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
		if (alphabet == 'q')
		{
			alphabet++;
		}
		else if (alphabet == 'e')
		{
			alphabet++;
		}
	}
	putchar('\n');
	return (0);
}
