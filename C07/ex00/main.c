#include "ft_strdup.c"
#include <stdio.h>
#ifdef __linux__
  #include <bsd/string.h>
#elif __APPLE__
  #include <string.h>
#endif

void test_1(int i)
{
	char str[5][500] = {"", "0","1","a towel has immense psychological value","10a010"};

	char *dest = strdup(str[i]);
	printf("--- strdup ---\n");
	printf("src : %s \n", str[i]);
	printf("dst : %s \n", dest);
	printf("psrc : %p \n", &str[i]);
	printf("pdst : %p \n", &dest);
}

void test_2(int i)
{
	char str[5][500] = {"","0","1","a towel has immense psychological value","10a010"};

	char *dest = ft_strdup(str[i]);
	printf("--- ft_strdup ---\n");
	printf("src : %s \n", str[i]);
	printf("dst : %s \n", dest);
	printf("psrc : %p \n", &str[i]);
	printf("pdst : %p \n", &dest);
}

int main (void)
{
	for (int i = 0; i < 5; i++)
	{
		test_1(i);
		test_2(i);
	}
	return (0);
}