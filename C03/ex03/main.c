#include "ft_strncat.c"
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
	unsigned int n[4] = {1, 10, 20, 3};

	printf("-- strncat --\n");
	printf("str1 : %s\nstr2 : %s\nn    : %d\n", str1[i], str2[i], n[i]);
	printf(ANSI_COLOR_GREEN "strncat : %s\n" ANSI_COLOR_RESET, strncat(str1[i], str2[i], n[i]));

}


void test_2(int i)
{
	char str1[4][500] = {"0","1","a towel has immense psychological value","10a010"};
	char str2[4][500] = {"1","0","For some reason, if a strag discovers that a hitchhiker has his towel with him, he will automatically assume that he is also in possession of a toothbrush, washcloth, soap, tin of biscuits, flask, compass, map, ball of string, gnat spray, wet-weather gear, space suit etc., etc.","101010"};
	unsigned int n[4] = {1, 10, 20, 3};

	printf("-- ft_strncat --\n");
	printf("str1 : %s\nstr2 : %s\nn    : %d\n", str1[i], str2[i], n[i]);
	printf(ANSI_COLOR_GREEN "ft_strncat : %s\n" ANSI_COLOR_RESET, ft_strncat(str1[i], str2[i], n[i]));

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