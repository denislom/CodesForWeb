#include <stdlib.h>

// example of losing the address
int	main(void)
{
	int	*ptr;

	ptr = (int *)malloc(sizeof(int));
	*ptr = 5;
	ptr = (int *)malloc(sizeof(int));
	free(ptr);
	free(ptr);
	return (0);
}