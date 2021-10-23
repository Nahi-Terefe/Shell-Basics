#include <stdio.h>
#include <unistd.h>

/**
 * main - fork example
 *
 * Return: Always 0.
 */
int main(void)
{
    pid_t my_pid;
    pid_t pid;

    my_pid = getpid();
    printf("Before fork\n");
    printf("My pid is %u\n", my_pid);

    pid = fork();
    if (pid == -1)
    {
        perror("Error:");
        return (1);
    }

    printf("PID of forked is: %u\n", pid);
    printf("After fork\n");
    my_pid = getpid();
    printf("My pid is %u\n", my_pid);
    return (0);
}
