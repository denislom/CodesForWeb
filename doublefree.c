#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	int	*ptr1;
	int *ptr2;

	ptr1 = (int *) malloc(sizeof(int));
	ptr1 = (int *) malloc(sizeof(int));
	*ptr1 = 10;
	ptr2 = ptr1;
	free(ptr1);
	free(ptr2);
	return (0);
}
