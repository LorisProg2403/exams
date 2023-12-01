#include <unistd.h>

void	ft_putchar(char c)
{write(1, &c, 1);}

int	is_maj(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	is_min(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int main(int ac , char **av)
{
	if (ac == 2)
	{
		int x = 0;
		while (av[1][x])
		{
			if (is_maj(av[1][x]))
				ft_putchar(av[1][x] + 32);
			else if (is_min(av[1][x]))
				ft_putchar(av[1][x] - 32);
			else
				ft_putchar(av[1][x]);
			x++;
		}
	}
	ft_putchar('\n');
}
