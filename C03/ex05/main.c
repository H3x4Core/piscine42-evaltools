#include "ft_strlcat.c"
#include <stdio.h>
#ifdef __linux__
	#include <bsd/string.h>
#elif __APPLE__
	#include <string.h>
#endif

#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_RESET   "\x1b[0m"

void test_1(int i)
{
	char str1[4][500] = {"0","1","a towel has immense psychological value","10a010"};
	char str2[4][500] = {"1","0","For some reason, if a strag discovers that a hitchhiker has his towel with him, he will automatically assume that he is also in possession of a toothbrush, washcloth, soap, tin of biscuits, flask, compass, map, ball of string, gnat spray, wet-weather gear, space suit etc., etc.","101010"};
	unsigned int n[4] = {0, 10, 50, 9};

	printf("-- strlcat --\n");
	printf("str1 : %s\nstr2 : %s\nn    : %d\n", str1[i], str2[i], n[i]);
	printf(ANSI_COLOR_GREEN "strlcat : %s\nsize : %ld\n" ANSI_COLOR_RESET, str1[i], strlcat(str1[i], str2[i], n[i]));
	printf("strlen(dest): %ld\n", strlen(str1[i]));
	printf("strlen(src): %ld\n", strlen(str2[i]));
}


void test_2(int i)
{
	char str1[4][500] = {"0","1","a towel has immense psychological value","10a010"};
	char str2[4][500] = {"1","0","For some reason, if a strag discovers that a hitchhiker has his towel with him, he will automatically assume that he is also in possession of a toothbrush, washcloth, soap, tin of biscuits, flask, compass, map, ball of string, gnat spray, wet-weather gear, space suit etc., etc.","101010"};
	unsigned int n[4] = {0, 10, 50, 9};

	printf("-- ft_strlcat --\n");
	printf("str1 : %s\nstr2 : %s\nn    : %d\n", str1[i], str2[i], n[i]);
	printf(ANSI_COLOR_GREEN "ft_strlcat : %s\nsize : %d\n" ANSI_COLOR_RESET, str1[i], ft_strlcat(str1[i], str2[i], n[i]));
	printf("strlen(dest): %ld\n", strlen(str1[i]));
	printf("strlen(src): %ld\n", strlen(str2[i]));
}


int main (void)
{
	for (int i = 0; i < 4; i++)
	{
		test_1(i);
		test_2(i);
	}
	return (0);
}