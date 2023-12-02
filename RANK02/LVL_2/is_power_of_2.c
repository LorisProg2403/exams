
int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n != 1)
	{
		if (n % 2 == 0)
			n /= 2;
		else
			return (0);
	}
	return (1);
}

/*
#include <stdio.h>
int main(void)
{
	unsigned x = 1048576;
	printf("1024 : %u\n", is_power_of_2(x));
}
*/
