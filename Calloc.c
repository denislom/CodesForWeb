#include <stdlib.h>

int	main(void)
{
	int	*ptr;

	ptr = calloc(5, sizeof(int));
	free(ptr);
	return (0);
}
