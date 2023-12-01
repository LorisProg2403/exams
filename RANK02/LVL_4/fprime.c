#include <stdio.h>
#include <stdlib.h>

int		is_prime(int nb)
{
	int		i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	if (ac == 2 && atoi(av[1]) > 0)
	{
		int x = atoi(av[1]);
		int x2 = x;
		int i = 2;
		while (i < x2)
		{
			while (!is_prime(i))
				i++;
			if (x % i == 0)
			{
				printf("%d", i);
				x /= i;
				if (x == 1)
					break ;
				printf("*");
			}
			else
				i++;
		}
		if (x == x2)
			printf("%d", x);
	}
	printf("\n");
}
