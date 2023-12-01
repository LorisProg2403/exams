#include <unistd.h>

int	get_reps(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c - 64);
	if (c >= 'a' && c <= 'z')
		return (c - 96);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		while (av[1][i])
		{
			int x = 0;
			while (x < get_reps(av[1][i]) - 1)
			{
				ft_putchar(av[1][i]);
				x++;
			}
			ft_putchar(av[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
}