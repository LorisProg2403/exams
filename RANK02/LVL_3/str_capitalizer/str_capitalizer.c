#include <unistd.h>

void	ft_putchar(char c)
{write(1, &c, 1);}

int	is_maj(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	is_letter(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	is_first_letter(char *s, int i)
{
	if (!i)
		return (1);
	if (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n')
		return (1);
	return (0);
}

int main(int ac, char **av)
{
	if (ac > 1)
	{
		int x = 1;
		while (av[x])
		{
			int i = 0;
			while (av[x][i])
			{
				if (is_first_letter(av[x], i))
				{
					if (is_letter(av[x][i]))
					{
						if (is_maj(av[x][i]))
							ft_putchar(av[x][i]);
						else
							ft_putchar(av[x][i] - 32);
					}
					else
						ft_putchar(av[x][i]);
				}
				else
				{
					if (is_letter(av[x][i]))
					{
						if (is_maj(av[x][i]))
							ft_putchar(av[x][i] + 32);
						else
							ft_putchar(av[x][i]);
					}
					else
						ft_putchar(av[x][i]);
				}
				i++;
			}
			x++;
			ft_putchar('\n');
		}
	}
	else
		ft_putchar('\n');
}
