#include <unistd.h>
#include <limits.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == INT_MIN)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');

}

int	ft_atoi(char *s)
{
	int	out = 0;
	int is_neg = 1;
	int x = 0;
	if (s[x] == '-')
	{
		is_neg = -1;
		x++;
	}
	else if (s[x] == '+')
		x++;
	while (s[x] >= '0' && s[x] <= '9')
	{
		out = out * 10 + (s[x] - '0');
		x++;
	}
	return (out * is_neg);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int mul = ft_atoi(av[1]);
		int n = 1;
		while (n <= 9)
		{
			ft_putnbr(n);
			write(1," x ", 3);
			ft_putnbr(mul);
			write(1," = ",3);
			ft_putnbr(mul * n);
			ft_putchar('\n');
			n++;
		}

	}
	else 
		ft_putchar('\n');
}