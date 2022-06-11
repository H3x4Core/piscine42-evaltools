#include "ft_ultimate_ft.c"
#include <stdio.h>

int main (void)
{
	int i = 0;
	int *p0 = &i;
	int **p1 = &p0;
	int ***p2 = &p1;
	int ****p3 = &p2;
	int *****p4 = &p3;
	int ******p5 = &p4;
	int *******p6 = &p5;
	int ********p7 = &p6;
	int *********p8 = &p7;

	printf("-- ft_ultimate_ft --\n");
	printf("i = %i\n", i);
	ft_ultimate_ft(p8);
	printf("i = %i\n", i);
	
	return(0);
}