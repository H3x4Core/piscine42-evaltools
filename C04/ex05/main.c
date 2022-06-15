#include <stdio.h>
#include "ft_atoi_base.c"

int main (void)
{
	char str_bin[5][128] = {"0", "1", "1010", "-111", "    ---+--+1111aa1111"};
	char str_dec[5][128] = {"0", "1", "42", "-7", "      --+---+-+-+15a15!"};
	char str_hexa[5][128] = {"0", "1", "2a", "-7a", "     ----++-+-5ebg1234"};

	char base[3][128] = {"01", "0123456789", "0123456789abcdef"};

	printf("base : %s\n", base[0]);
	for (int i = 0; i < 5; i++)
	{
		printf("%s : %i\n",str_bin[i], ft_atoi_base(str_bin[i], base[0]));
	}
	
	printf("base : %s\n", base[1]);
	for (int i = 0; i < 5; i++)
	{
		printf("%s : %i\n",str_dec[i], ft_atoi_base(str_bin[i], base[1]));
	}
	
	printf("base : %s\n", base[2]);
	for (int i = 0; i < 5; i++)
	{
		printf("%s : %i\n",str_hexa[i], ft_atoi_base(str_bin[i], base[2]));
	}
}
