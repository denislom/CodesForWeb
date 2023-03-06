#include <stdio.h>

int main(void)
{
	int	number;
	int	*ptr;

	ptr = 0; // Zero refers to the null pointer
	number = 100;
	ptr = &number; 
	*ptr = 0; // Zero refers to the integer zero.
	printf("Address of ptr: %p, Value of number %i\n", ptr, number);
	printf("Value pointed to by a pointer variable ptr: %d, Value of number %i\n", *ptr, number);
	*ptr = 5;
	printf("%d", number);
	return (0);
}
