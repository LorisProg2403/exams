#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{write(1, &c, 1);}

void	ft_putstr(char *s)
{
	int i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

int	word_len(char *s)
{
	int i = 0;
	while (s[i] && s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
		i++;
	return (i);
}

char	*word_dup(char *s)
{
	int len = word_len(s);
	char *out = malloc(sizeof(char) * (len + 1));
	int i = 0;
	while (i < len)
	{
		out[i] = s[i];
		i++;
	}
	out[i] = '\0';
	return (out);
}

void	fill_words(char **output, char *s)
{
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	int i = 0;
	while (*s)
	{
		output[i] = word_dup(s);
			i++;
		while (*s && *s != ' ' && *s != '\t' && *s != '\n')
			s++;
		while (*s == ' ' || *s == '\t' || *s == '\n')
			s++;
	}
}

int	count_words(char *s)
{
	int count = 0;
	int i = 0;
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	while (*s)
	{
		count++;
		while (*s && *s != ' ' && *s != '\t' && *s != '\n')
			s++;
		while (*s == ' ' || *s == '\t' || *s == '\n')
			s++;
	}
	return (count);
}

char **ft_split(char *s)
{
	int n_words = count_words(s);
	char **output = malloc(sizeof(char *) * (n_words + 1));
	if (!output)
		return (NULL);

	fill_words(output, s);
	output[n_words] = 0;
	return (output);
}

int double_len(char **s)
{
	int i = 0;
	while (s[i])
		i++;
	return (i);
}

int main(int ac, char **av)
{
	if (ac > 1)
	{
		char **array = ft_split(av[1]);
		int size = double_len(array);
		if (size > 1)
		{
			int i = 1;
			while (array[i])
			{
				ft_putstr(array[i]);
				i++;
				ft_putchar(' ');
			}
		}
			ft_putstr(array[0]);
	}
	ft_putchar('\n');
}
