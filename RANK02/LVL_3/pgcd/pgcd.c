#include <stdio.h>
#include <libc.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int a = atoi(av[1]);
		int b = atoi(av[2]);
		int max;
		int min;
		if (a > b)
		{
			max = a;
			min = b;
		}
		else
		{
			max = b;
			min = a;
		}
		int div = min;
		while (div != 1)
		{
			if (min % div == 0 && max % div == 0)
			{
				printf("%d\n", div);
				return (0);
			}
			div--;
		}
		printf("1");
	}
	printf("\n");
}
