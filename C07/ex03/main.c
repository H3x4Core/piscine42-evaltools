#include "ft_strjoin.c"
#include <stdio.h>

int main(void)
{
	char **strs = malloc(sizeof(char)*128);
	char *str1 ="Salut";
	char *str2 = "comment";
	char *str3 = "ca";
	char *str4 = "va";
	char *str5 = " 42 1!1!";
	char *dst;
	char *sep = ", ";

	strs[0] = str1;
	strs[1] = str2;
	strs[2] = str3;
	strs[3] = str4;
	strs[4] = str5;

	dst = ft_strjoin(6, strs, sep);
	printf("%s\n", dst);
	
	printf("%p", dst);
	free(dst);
	//printf("%p", dst);

	return (0);

}
