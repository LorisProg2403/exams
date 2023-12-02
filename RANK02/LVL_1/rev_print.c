#include <unistd.h>

int	ft_strlen(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{write(1, &c, 1);}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int len = ft_strlen(av[1]) - 1;
		while (av[1][len])
		{
			ft_putchar(av[1][len]);
			len--;
		}
	}
	ft_putchar('\n');
}
