#include "ft_ultimate_div_mod.c"
#include <stdio.h>

int main (void)
{
	int a = 42;
	int b = 5;
	
	printf("--- ft_ultimate_div_mod ---\n");

	printf("a   : %i\n",a);
	printf("b   : %i\n",b);

	ft_ultimate_div_mod(&a, &b);

	printf("a   : %i\n",a);
	printf("b   : %i\n",b);
	
	return (0);
}