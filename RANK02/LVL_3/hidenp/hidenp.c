#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 3)
	{
		char *p1 = av[1];
		char *p2 = av[2];
		int i = 0;
		int j = 0;
		while (p2[j])
		{
			if (p2[j] == p1[i])
				i++;
			j++;
		}
		if (!p1[i])
			write(1,"1\n",2);
		else
			write(1, "0\n",2);
	}
	else
		write(1, "\n",1);
}
