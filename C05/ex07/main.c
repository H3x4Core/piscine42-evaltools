#include <stdio.h>
#include <math.h>
#include "ft_find_next_prime.c"

int main(void)
{
	for (int i = 0; i <= 1000; i++)
	{
		printf("ft_find_next_prime: %4d is %d\n", i, ft_find_next_prime(i));

	}
	return (0);
}
