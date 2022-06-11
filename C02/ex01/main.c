#include "ft_strncpy.c"
#include <stdio.h>

int main (void)
{
	char src[15] = "123456789 yolo";
	char dest[128] = "";
	unsigned int n = 10;
	
	ft_strncpy(dest, src, n);
	printf("%s",dest);
	return (0);
}