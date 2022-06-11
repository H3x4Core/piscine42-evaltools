#include "ft_rev_int_tab.c"
#include <stdio.h>

int main (void)
{
	int tab[5] = {1, 2, 3, 4, 5};
	int size = 5;

	for (int i = 0; i < size; i++)
	{
		printf("%2d ", tab[i]);
	}
	printf("\n");
	
	ft_rev_int_tab(tab, size);

	for (int i = 0; i < size; i++)
	{
		printf("%2d ", tab[i]);
	}
	printf("\n");

	return (0);
}