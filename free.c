#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	int	*ptr;

	ptr = (int *) malloc(sizeof(int));
	*ptr = 10;
	printf("%d, %p", *ptr, ptr);
	free(ptr);
	return (0);
}
