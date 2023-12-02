#include <unistd.h>
#include <limits.h>

void ft_putchar(char c)
{write(1, &c, 1);}

void	ft_putnbr(int n)
{
	if (n == INT_MIN)
		write(1, "-2147483648", 11);
	else if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
		ft_putnbr(n);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

int main(int ac, char **av)
{
	ft_putnbr(ac - 1);
	ft_putchar('\n');
}
