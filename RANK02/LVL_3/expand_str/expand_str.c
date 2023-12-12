#include <unistd.h>

void	ft_putchar(char c)
{write(1, &c, 1);}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		char *s = av[1];
		while (s[i] == ' ' || s[i] == '\t')
			i++;
		while (s[i])
		{
			while (s[i] && s[i] != ' ' && s[i] != '\t')
			{
				ft_putchar(s[i]);
				i++;
			}
			while (s[i] == ' ' || s[i] == '\t')
				i++;
			if (s[i])
				write(1, "   ",3);
		}
	}
	ft_putchar('\n');
}
