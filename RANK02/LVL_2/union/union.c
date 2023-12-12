#include <unistd.h>

void	ft_putchar(char c)
{write(1, &c, 1);}

void	ft_putstr(char *s)
{
	int i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

int is_in(char c, char *tab)
{
	int i = 0;
	while (tab[i])
	{
		if (c == tab[i])
			return (1);
		i++;
	}
	return (0);
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		char out[128];
		int o = 0;
		int i = 0;
		while (av[1][i])
		{
			if (!is_in(av[1][i], out))
			{
				out[o] = av[1][i];
				o++;
			}
			i++;
		}
		i = 0;
		while (av[2][i])
		{
			if (!is_in(av[2][i], out))
			{
				out[o] = av[2][i];
				o++;
			}
			i++;
		}
		out[o] = '\0';
		ft_putstr(out);
	}
	ft_putchar('\n');
}
