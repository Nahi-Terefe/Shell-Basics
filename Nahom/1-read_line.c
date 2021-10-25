#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry to our progrm
 *
 * desc - accepts input(stdin) from a user, reads it and prints it back to stdout.
 * Return - Always 0
 */
int main()
{
	char *buffer;
	size_t buffsize = 64;
	size_t len;

	buffer = malloc(buffsize * sizeof(char));
	if (buffer == NULL)
	{
		return (-1);
	}

	printf("$ ");
	len = getline(&buffer, &buffsize, stdin);
	printf("%s\n", buffer);

	return (0);
}
