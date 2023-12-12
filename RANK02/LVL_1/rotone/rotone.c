#include <unistd.h>

void	ft_putchar(char c)
{write(1, &c, 1);}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				if (av[1][i] == 'z')
					ft_putchar('a');
				else
					ft_putchar(av[1][i] + 1);
			}
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				if (av[1][i] == 'Z')
					ft_putchar('A');
				else
					ft_putchar(av[1][i] + 1);
			}
			else
				ft_putchar(av[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
}
