#include "stddef.h"

size_t ft_strcspn(const char *s, const char *reject)
{
	size_t	i = 0;

	while (s[i])
	{
		size_t	j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

/*
#include <libc.h>
#include <stdio.h>
int main(void)
{
	char *s;
	char *charset;

	s = "HelloWord";
	charset = "e";
	size_t res = strcspn(s, charset);
	size_t ft_res = ft_strcspn(s, charset);
	printf("Res : %lu\n", res);
	printf("Ft_res : %lu\n", ft_res);
}*/
