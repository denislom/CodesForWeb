#include <stdlib.h>
#include <string.h>

int	main(void)
{
	int	*ptr;

	ptr = (int *)malloc(5 * sizeof(int));
	memset(ptr, 0, 5 * sizeof(int));
	// ptr = calloc(5, sizeof(int));
	free(ptr);
	return (0);
}
