
int is_valid(char c, int base)
{
	if (c >= '0' && c <= '9')
		return (c - '0' < base);
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 10 < base);
	if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 10 < base);
	return (0);
}

int get_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 10);
	return (c - 'A' + 10);
}

int	ft_atoi_base(char *str, int str_base)
{
	char *s = str;
	int base = str_base;

	int out = 0;
	int sign = 1;
	int i = 0;
	if (base <= 0 || base > 16)
		return (0);
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
		i++;
	while(is_valid(s[i], base))
	{
		out *= base;
		out += get_digit(s[i]);
		i++;
	}
	return (out * sign);
}
/*
#include <stdio.h>
int main(void)
{
	int base = 16;
	char *num = "13268!";
	int res = ft_atoi_base(num, base);
	printf("%d\n",res);
}
*/
