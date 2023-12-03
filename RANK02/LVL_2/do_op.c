#include <stdio.h>
//#include <stdlib.h>
#include <unistd.h>
#include <libc.h>

int main(int ac, char **av)
{
	if (ac == 4)
	{
		int x = atoi(av[1]);
		int y = atoi(av[3]);
		if (av[2][0] == '+')
			printf("%d", x + y);
		else if (av[2][0] == '-')
			printf("%d", x - y);
		else if (av[2][0] == '*')
			printf("%d", x * y);
		else if (av[2][0] == '/')
			printf("%d", x / y);
		else
			printf("0");

	}
	printf("\n");
}
