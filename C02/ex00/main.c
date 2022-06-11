#include "ft_strcpy.c"
#include <stdio.h>

int main (void)
{
	char src[15] = "123456789 yolo";
	char dest[128] = "";
	
	ft_strcpy(dest, src);
	printf("%s",dest);
	return (0);
}