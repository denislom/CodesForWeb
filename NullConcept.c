#include <stdio.h>

int main(void)
{
	int	*ptr;
	int number;

	number = 1;
	ptr = 0;
	printf("Address of ptr: %p\n", ptr);
	ptr = &number;
	// ptr = NULL;
	printf("Address of ptr: %p\n", ptr);

	// if (ptr)
	// {
	// 	// ptr is not NULL
	// }
	// else
	// {
	// 	// ptr is NULL
	// }

	// if (ptr == NULL)
	// 	// ptr is NULL
	// if (ptr != NULL)
	// 	// ptr is not NULL
	return (0);
}
