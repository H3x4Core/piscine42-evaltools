#include "ft_recursive_factorial.c"
#include <stdio.h>

int main(void)
{
	for (int i = -1; i < 13; i++)
	{
		printf("!%i = %i\n", i, ft_recursive_factorial(i));
	}
	return (0);
}