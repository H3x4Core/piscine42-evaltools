#include "ft_strcat.c"
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

	printf("-- strcat --\n");
	printf("str1 : %s\nstr2 : %s\n", str1[i], str2[i]);
	printf(ANSI_COLOR_GREEN "strcat : %s\n" ANSI_COLOR_RESET, strcat(str1[i], str2[i]));

}


void test_2(int i)
{
	char str1[4][500] = {"0","1","a towel has immense psychological value","10a010"};
	char str2[4][500] = {"1","0","For some reason, if a strag discovers that a hitchhiker has his towel with him, he will automatically assume that he is also in possession of a toothbrush, washcloth, soap, tin of biscuits, flask, compass, map, ball of string, gnat spray, wet-weather gear, space suit etc., etc.","101010"};

	printf("-- ft_strcat --\n");
	printf("str1 : %s\nstr2 : %s\n", str1[i], str2[i]);
	printf(ANSI_COLOR_GREEN "ft_strcat : %s\n" ANSI_COLOR_RESET, ft_strcat(str1[i], str2[i]));

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