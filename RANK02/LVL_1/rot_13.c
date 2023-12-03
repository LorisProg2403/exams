#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c,1);
}

void	treat_min(char c)
{
	int i = 13;
	while (i && c != 'z')
	{
		c++;
		i--;
	}
	if (!i)
	{
		ft_putchar(c);
		return ;
	}
	c = 'a';
	i--;
	while (i)
	{
		c++;
		i--;
	}
	ft_putchar(c);
}

void	treat_maj(char c)
{
	int i = 13;
	while (i && c != 'Z')
	{
		c++;
		i--;
	}
	if (!i)
	{
		ft_putchar(c);
		return ;
	}
	c = 'A';
	i--;
	while (i)
	{
		c++;
		i--;
	}
	ft_putchar(c);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				treat_min(av[1][i]);
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				treat_maj(av[1][i]);
			else
				ft_putchar(av[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
}
