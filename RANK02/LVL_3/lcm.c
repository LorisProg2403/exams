
unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int x = 1;
	while (1)
	{
		if (x % a == 0 && x % b == 0)
			return (x);
		x++;
	}
}
/*
#include <stdio.h>
int main(void)
{
	unsigned int res = lcm(2, 1);
	printf("Res : %u\n",res);
}
*/
