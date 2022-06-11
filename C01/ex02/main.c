#include "ft_swap.c"
#include <stdio.h>

int main (void)
{
	int i = 42;
	int j = -42;

	printf("i: %i\n", i);
	printf("j: %i\n", j);

	ft_swap(&i,&j);

	printf("i: %i\n", i);
	printf("j: %i\n", j);

	return (0);
}