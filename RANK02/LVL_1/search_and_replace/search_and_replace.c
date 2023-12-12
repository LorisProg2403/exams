#include <unistd.h>

void	ft_putchar(char c)
{write(1, &c, 1);}

int main(int ac, char **av)
{
	if (ac == 4)
	{
		if (!av[2][1] && !av[3][1])
		{
			char s = av[2][0];
			char r = av[3][0];
			int i = 0;
			while (av[1][i])
			{
				if (av[1][i] == s)
					ft_putchar(r);
				else
					ft_putchar(av[1][i]);
				i++;
			}
		}
	}
	ft_putchar('\n');
}
