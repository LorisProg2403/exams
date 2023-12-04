#include <unistd.h>

void	ft_putchar(char c)
{write(1, &c, 1);}

void	ft_putnbr(int n)
{
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

int	ft_atoi(char *s)
{
	int out = 0;
	int i = 0;
	while (s[i] >= '0' && s[i] <= '9')
	{
		out = out * 10 + (s[i] - '0');
		i++;
	}
	return (out);
}

int	is_prime(int n)
{
	int div = n - 1;
	while (div > 1)
	{
		if (n % div == 0)
			return (0);
		div--;
	}
	return (1);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int x = ft_atoi(av[1]);
		int i = 2;
		int sum = 0;
		while (i <= x)
		{
			if (is_prime(i))
				sum += i;
			i++;
		}
		ft_putnbr(sum);
	}
	else
		ft_putchar('0');
	ft_putchar('\n');
}
