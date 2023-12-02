#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{write(1, &c, 1);}

void	ft_puthex(int n)
{
	if (n > 15)
	{
		ft_puthex(n / 16);
		ft_puthex(n % 16);
	}
	else
	{
		char list[] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
		ft_putchar(list[n]);
	}
}

int ft_atoi(char *s)
{
	int out = 0;
	int is_neg = 1;
	int i = 0;
	if (s[i] == '-')
	{
		is_neg = -1;
		i++;
	}
	else if (s[i] == '+')
		i++;
	while (s[i] >= '0' && s[i] <= '9')
	{
		out = out * 10 + (s[i] - '0');
		i++;
	}
	return (out * is_neg);

}

int main(int ac, char **av)
{
	if (ac == 2)
		ft_puthex(ft_atoi(av[1]));
	ft_putchar('\n');
}
