
int	max(int *tab, unsigned int len)
{
	int max = 0;
	while (len)
	{
		if (tab[len] > max)
			max = tab[len];
		len--;
	}
	return (max);
}
