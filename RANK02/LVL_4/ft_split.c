#include <stdlib.h>

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

/*
#include <stdio.h>
int main(int argc, char **argv)
{
	char	**split;
	int		i;

	if (argc == 2)
	{
		split = ft_split(argv[1]);
			printf("%s ", split[0]);
		i = 1;
		while (split[i] != 0)
		{
			printf("%s ", split[i]);
			i++;
		}
		printf("%s", split[i]);
	}
	printf("\n");
	free(split);
    return (0);
}
*/
