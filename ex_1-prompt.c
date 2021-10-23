#include <stdio.h>
#include <stdlib.h>

/**
* main - print the line from input
*
* Return: Always 0
*/
int main(void)
{
	char *buffer;
	size_t b_size;

	b_size = 32;
	buffer = malloc(sizeof(char) * b_size);

	printf("$ ");

	getline(&buffer, &b_size, stdin);

	printf("%s", buffer);

	return (0);
}
