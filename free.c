#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	int	*ptr;

	ptr = (int *) malloc(sizeof(int));
	*ptr = 10;
	printf("Before free\nValue: %d, adress %p\n\n", *ptr, ptr);
	free(ptr);
	printf("Address of ptr after free: %p\n", ptr);
	ptr = NULL;
	printf("Address of ptr after ptr = NULL, address of ptr: %p\n", ptr);
	return (0);
}
