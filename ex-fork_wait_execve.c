#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

/**
* main - executes the command ls -l /tmp in 5 different child processes
*
* Return: Always 0.
*/
int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
	pid_t child_pid;
	int i, status;

	i = 0;

	while (i < 5)
	{
		child_pid = fork();

		if (child_pid == -1)
			return (1);

		if (child_pid == 0)
		{
			if (execve(argv[0], argv, NULL) == -1)
				return (1);
		}
		else
			wait(&status);

		i++;
	}

	return (0);
}
