#include <stdio.h>

int	main(void)
{
	int			num;
	int *const	constptr = &num;

	num = 10;
	printf("Address of constptr: %p\n", &constptr);
	printf("Value of constptr and num: %d, %d\n", *constptr, num);
	*constptr = 9;
	printf("Address of constptr: %p\n", &constptr);
	printf("Value of constptr and num: %d, %d\n", *constptr, num);
	return (0);
}
