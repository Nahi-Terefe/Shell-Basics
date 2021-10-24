#include <stdio.h>

extern char **environ;

int main(int ac, char **av, char **env)
{
	printf("Address of env: 0x%lu\n", (unsigned long)&env);
	printf("Address of environ: 0x%lu\n", (unsigned long)&environ);

	return (0);
}
