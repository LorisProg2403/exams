#include <unistd.h>

void	ft_putchar(char c)
{write(1, &c, 1);}

int is_in(char *s, char c)
{
	int i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int doubled(char *s, int x)
{
	int i = 0;
	char c = s[x];
	while (i < x)
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		int i = 0;
		while (av[1][i])
		{
			if (is_in(av[2], av[1][i]) && !doubled(av[1], i))
				ft_putchar(av[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
}
