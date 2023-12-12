#include <stdlib.h>

int	ft_len(int a, int b)
{
	int len = 0;
	while (a <= b)
	{
		len++;
		a++;
	}
	return (len);
}

int	*ft_rrange(int start, int end)
{
	if (start == end)
	{
		int *out = malloc(sizeof(int));
		out[0] = start;
		return (out);
	}
	if (start < end)
	{
		int len = ft_len(start, end);
		int *out = malloc(sizeof(int) * len);
		int a = end;
		int i = 0;
		while (a >= start)
		{
			out[i] = a;
			a--;
			i++;
		}
		return (out);
	}
	else
	{
		int len = ft_len(end, start);
		int *out = malloc(sizeof(int) * len);
		int a = end;
		int i = 0;
		while (a <= start)
		{
			out[i] = a;
			a++;
			i++;
		}
		return (out);
	}
}

/*
#include <stdio.h>
int main(void)
{
	int start = 0;
	int end = -3;
	printf("(%d,%d) : ",start,end);
	int *out = ft_rrange(start,end);
	int i = 0;
	while (i < 4)
	{
		printf("%d ", out[i]);
		i++;
	}
	printf("\n");
}
*/
