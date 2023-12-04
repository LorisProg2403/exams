#include <stdlib.h>

int	len(int a, int b)
{
	int len = 0;
	if (a < b)
	{
		while (a != b)
		{
			a++;
			len++;
		}
		return (len + 1);
	}
	else if (b < a)
	{
		while (a != b)
		{
			b++;
			len++;
		}
		return (len + 1);
	}
	if (a == b)
		return (1);
	return (len);
}

int	*ft_range(int start, int end)
{
	int i_len = len(start, end);
	int *out = malloc(sizeof(int) * i_len);
	int i = 0;
	if (start < end)
	{
		while (i < i_len)
		{
			out[i] = start + i;
			i++;
		}
		return (out);
	}
	if (start > end)
	{
		while (i < i_len)
		{
			out[i] = start - i;
			i++;
		}
		return (out);
	}
	out[0] = start;
	return (out);
}

/*
#include <stdio.h>
int main(void)
{
	int *s1 = ft_range(0, -3);
	//int len2 = len(-1, 2);
	//int len3 = len (0, 0);
	//int len4 = len(0 , -3);
	int i = 0;
	while (i < len(0, -3))
	{
		printf("%d\n", s1[i]);
		i++;
	}
}
*/
