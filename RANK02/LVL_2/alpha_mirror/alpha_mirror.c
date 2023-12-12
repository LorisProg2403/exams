#include <unistd.h>

void	ft_putchar(char c)
{write(1, &c, 1);}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		char *s = av[1];
		int i = 0;
		while (s[i])
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				int diff = s[i] - 'a';
				ft_putchar('z' - diff);
			}
			else if (s[i] >= 'A' && s[i] <= 'Z')
			{
				int diff = s[i] - 'A';
				ft_putchar('Z' - diff);
			}
			else
				ft_putchar(s[i]);
			i++;
		}
	}
	ft_putchar('\n');
}
