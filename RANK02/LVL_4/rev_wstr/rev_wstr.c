#include <unistd.h>
#include <stdlib.h>

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
	int i = 0;
	int len = word_len(s);
	char *word = malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

void	fill_words(char **output, char *s)
{
	int i = 0;
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
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

int	count_words(char *str)
{
	int num = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n')
		++str;
	while (*str)
	{
		num++;
		while (*str && *str != ' ' && *str != '\t' && *str != '\n')
			str++;
		while (*str == ' ' || *str == '\t' || *str == '\n')
			str++;
	}
	return (num);
}

char	**ft_split(char *str)
{
	int	n_words;
	char **output;

	n_words = count_words(str);
	output = malloc(sizeof(char *) * (n_words + 1));

	output[n_words] = 0;
	fill_words(output, str);
	return (output);
}

#include <stdio.h>
int main(int ac, char **av)
{
	if (ac == 2)
	{
		char **array = ft_split(av[1]);
		int i = 0;
		while (array[i])
			i++;
		i--;
		while (i >= 0)
		{
			ft_putstr(array[i]);
			if (i != 0)
				ft_putchar(' ');
			i--;
		}
		i = 0;
		while (array[i])
		{
			free(array[i]);
			i++;
		}
		free(array);
	}
	ft_putchar('\n');
}
