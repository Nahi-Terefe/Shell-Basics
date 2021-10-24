#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <string.h>

/**
* main - simple shell that can run commands with their \
* full path, without any argument
*
* Return: Always 0.
*/
int main(void)
{
	char *buffer, *delim, *params;
	char *argv[2];
	size_t b_size;
	int status;
	pid_t child_pid;

	argv[1] = NULL;
	b_size = 32;
	buffer = malloc(sizeof(char) * b_size);
	delim = "\n";

	printf("#cisfun$ ");

	while (getline(&buffer, &b_size, stdin) != -1)
	{
		params = strtok(buffer, delim);
		argv[0] = params;

		child_pid = fork();

		if (child_pid == -1)
			return (1);

		if (child_pid == 0)
		{
			if (execve(argv[0], argv, NULL) == -1)
				return (1);
		}
		else
		{
			wait(&status);
			printf("#cisfun$ ");
		}
	}

	return (0);
}
