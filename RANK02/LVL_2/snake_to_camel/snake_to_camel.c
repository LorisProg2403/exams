#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{write(1, &c, 1);}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		while (av[1][i])
		{
			if (av[1][i] == '_')
			{
				i++;
				ft_putchar(av[1][i] - 32);
			}
			else
				ft_putchar(av[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
}
