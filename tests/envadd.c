#include <stdio.h>
/**
 * main - prints the environment using environ
 *
 * Return: 0
 */
int main(int ac, char **av, char **env)
{
	unsigned int i;

	i = environ;
	while (env[i] != NULL)
	{
		printf("%s\n", env[i]);
		i++;
	}
	return (0);
}
