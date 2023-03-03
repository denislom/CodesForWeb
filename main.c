#include <stdio.h>

int main(void)
{
	int	number;
	int	*ptr;
	
	printf("Address of ptr: %p, Value of number %i\n", ptr, number);
	number = 100;
	printf("Address of ptr: %p, Value of number %i\n", ptr, number);
	ptr = &number;
	printf("Address of ptr: %p, Value of number %i\n", ptr, number);
	printf("Address of ptr: %i, Value of number %i\n", ptr, number);

	return (0);
}
