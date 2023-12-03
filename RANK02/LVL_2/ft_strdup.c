#include <stdlib.h>

int	ft_strlen(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int len = ft_strlen(src);
	char *out = malloc(sizeof(char) * (len + 1));
	int i = 0;
	while (i < len)
	{
		out[i] = src[i];
		i++;
	}
	out[i] = '\0';
	return (out);
}
