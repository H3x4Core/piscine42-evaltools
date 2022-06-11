#include "ft_ft.c"
#include <stdio.h>

int main(void)
{
	int i = 0;
	printf("Before ft_ft call : %i\n",i);
	ft_ft(&i);
	printf("After ft_ft call  : %i\n",i);
	return 0;
}
