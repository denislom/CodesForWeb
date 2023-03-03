#include <stdio.h>

int main(void)
{
	int	number;
	int	*ptr;
	
	number = 5;
	ptr = &number;
	printf("%p\n", ptr);
	number = 4;
	printf("%i\n", *ptr);
	printf("%i\n", *ptr);
	printf("%i\n", number);

	// printf("Address of ptr: %p, Value of number %i\n", ptr, number);
	// number = 100;
	// printf("Address of ptr: %p, Value of number %i\n", ptr, number);
	// ptr = &number;
	// printf("Address of ptr: %p, Value of number %i\n", ptr, number);
	// printf("Address of ptr: %i, Value of number %i\n", ptr, number);
	return (0);
}
