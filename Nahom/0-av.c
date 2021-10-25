#include <stdio.h>

/**
 * main - entry program.
 * 
 * desrcription: prints out all the argument passed to a program.
 *
 * Return: 0
 */
int main(int ac __attribute__((unused)), char **av)
{
	int i = 1;

	while (av[i] != NULL)
	{
		printf("%s\n", av[i]);

		i++;
	}

	return (0);
}
