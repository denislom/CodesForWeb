#include <stdio.h>

int	main(void)
{
	int			num;
	const int	limit = 100;
	int			*ptr;
	const int	*cptr;
	int *const	constptr = &num;
	int			num2;

	num = 10;
	num2 = num;
	ptr = &num;
	cptr = &limit;
	num = 9;
	printf("Address of num: %p\n", &num);
	printf("Address of limit: %p\n", &limit);
	printf("Address of ptr: %p\n", &ptr);
	printf("Address of cptr: %p\n", &cptr);
	printf("Address of constptr: %p\n", &constptr);
	printf("Value of constptr: %d\n", *constptr);
	*constptr = num2;
	printf("Address of constptr: %p\n", &constptr);
	printf("Value of constptr: %d\n", *constptr);
	return (0);
}
