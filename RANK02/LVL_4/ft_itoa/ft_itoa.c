#include <stdlib.h>

int nbr_of_digits(int nbr)
{
	int n = 1;
	while (nbr > 9)
	{
		n++;
		nbr /= 10;
	}
	return (n);
}

int	ft_power(int n, int p)
{
	int out = 1;
	while (p > 0)
	{
		out *= n;
		p--;
	}
	return (out);
}

char	*ft_itoa(int nbr)
{
	int len = 0;
	if (nbr < 0)
		len = nbr_of_digits(nbr * -1) + 1;
	else
		len = nbr_of_digits(nbr);
	char *out = malloc(sizeof(char) * (len + 1));
	if (!out)
		return (NULL);
	int i;
	if (nbr < 0)
	{
		out[0] = '-';
		i = 1;
		nbr *= -1;
		len--;
	}
	else
		i = 0;
	while (len)
	{
		out[i] = (nbr / ft_power(10, len - 1)) + '0';
		nbr = nbr % ft_power(10, len - 1);
		i++;
		len--;
	}
	out[i] = '\0';
	return (out);
}

