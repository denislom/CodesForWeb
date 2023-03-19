#include <stdio.h>

int	main(void)
{
	int			num;
	const int	limit = 100;
	int			*ptr;
	const int	*cptr;

	num = 10;
	ptr = &num;
	cptr = &limit;
	printf("Adress of num%p\n", &num);
	printf("Adress of limit%p\n", &limit);
	printf("Adress of ptr%p\n", &ptr);
	printf("Adress of cptr%p\n", &cptr);
	return (0);
}
