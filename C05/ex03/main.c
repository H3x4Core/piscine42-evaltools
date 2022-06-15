#include "ft_recursive_power.c"
#include <stdio.h>

int main(void)
{
	for (int i = -10; i < 11; i++)
	{
		for (int j = -1; j < 11; j++)
		{
			printf("%i^%i = %i\n", i, j, ft_recursive_power(i, j));
		}
	}
	return (0);
}