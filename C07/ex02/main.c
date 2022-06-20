#include <stdio.h>

#include "ft_ultimate_range.c"

int main (void)
{
	int min[5] = {-5, 0, 0, 10, 10};
	int max[5] = {1, 1, 101, 4, 10};
	int i = 0;
	
	printf("--- ft_ultimate_range ---\n");
	while (i < 5)
	{
		int *range;
		int **p0range = &range;

		printf("%i\n",ft_ultimate_range(p0range, min[i], max[i]));
		
		printf("min: %d max: %d\n", min[i], max[i]);
		
		int j_max = (max[i] - min[i]);
		int j = 0;

		printf("result: ");

		while (j < j_max)
			printf("%d ", range[j++]);

		printf("\n");
		printf("adress: %p\n\n", range);

		i++;
	}
	return (0);
}
