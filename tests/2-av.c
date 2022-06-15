#include <stdio.h>
#include <stdlib.h>

/**
main -prototype
*ac -arg 1
*av -arg 2
*/

int main(int ac, char **av)
{

int i = 0;

while (av[i])
{

printf("%s ", av[i]);
i++;
}

printf("\n");
return (0);
}
