#include <stdio.h>
#include <stdlib.h> //used for malloc

int	main(void)
{
	int	*ptr;

	ptr = malloc(sizeof(int));
	*ptr = 2;
	printf("value of ptr: %d\n", *ptr);
	free(ptr);
	return (0);
}
