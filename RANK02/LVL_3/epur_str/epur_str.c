#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{write(1, &c, 1);}

/*void	ft_putstr(char *s)
{
	int i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

int	words_len(char *s)
{
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	int c = 0;
	while (*s != ' ' && *s != '\t' && *s != '\n')
	{
		c++;
		s++;
	}
	return (c);
}

void	fill_words(char *s, char **array)
{
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	int i = 0;
	while (*s)
	{
		int w_len = words_len(s);
		array[i] = malloc(sizeof(char) * (w_len + 1));
		int x = 0;
		while (*s != ' ' && *s != '\t' && *s != '\n')
		{
			array[i][x] = *s;
			x++;
			s++;
		}
		while (*s == ' ' || *s == '\t' || *s == '\n')
			s++;
		i++;
	}
}

int count_words(char *s)
{
	int count = 0;
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	while (*s)
	{
		count++;
		while (*s != ' ' && *s != '\t' && *s != '\n')
			s++;
		while (*s == ' ' || *s == '\t' || *s == '\n')
			s++;
	}
	return (count);
}

char	**ft_split(char *s)
{
	int n_words = count_words(s);
	char **output = malloc(sizeof(char *) * (n_words + 1));

	fill_words(s, output);
	output[n_words] = 0;
	return (output);
}*/

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		while (av[1][i] == ' ' || av[1][i] == '\t' || av[1][i] == '\n')
			i++;
		while (av[1][i])
		{
			while(av[1][i] && av[1][i] != ' ' && av[1][i] != '\t' && av[1][i] != '\n')
			{
				ft_putchar(av[1][i]);
				i++;
			}
			while (av[1][i] == ' ' || av[1][i] == '\t' || av[1][i] == '\n')
				i++;
			if (av[1][i])
				ft_putchar(' ');
		}
	}
	ft_putchar('\n');
}
