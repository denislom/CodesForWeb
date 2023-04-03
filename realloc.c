#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = (char *) malloc(8);
	strcpy(str1, "1234567");
	printf("str1 %p [%s]\n", str1, str1);
	str2 = realloc(str1, 6);
	printf("str1 %p [%s]\n", str1, str1);
	printf("str2 %p [%s]\n", str2, str2);
	free(str1);
	return (0);
}
