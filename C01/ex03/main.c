#include "ft_div_mod.c"
#include <stdio.h>

int main (void)
{
	int a = 42;
	int b = 5;
	int div = 0;
	int mod = 0;

	printf("--- ft_div_mod ---\n");
	printf("a   : %i\n",a);
	printf("b   : %i\n",b);
	printf("div : %i\n",div);
	printf("mod : %i\n",mod);

	ft_div_mod(a, b, &div, &mod);

	printf("a   : %i\n",a);
	printf("b   : %i\n",b);
	printf("div : %i\n",div);
	printf("mod : %i\n",mod);

	return (0);
}