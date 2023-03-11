#include <stdio.h>

int main(void)
{
	int	number;
	int	*ptr;
	void *ptrvoid;

	printf("Address of ptr: %p\nAdress of ptrvoid %p\n", ptr, ptrvoid);
	printf("\nnumber = 10;\nptrvoid = &number;\n\n");
	number = 10;
	ptrvoid = &number;
	printf("Adress of ptrvoid %p\n", ptrvoid);
	printf("\nptr = (int *)ptrvoid;\n\n");
	ptr = (int *)ptrvoid;
	printf("Address of ptr: %p\nAdress of ptrvoid %p\nValue pointed to by a pointer variable ptr: %d\n", ptr, ptrvoid, *ptr);

	// printf("Address of ptr: %p\nAdress of ptrvoid %p\nValue pointed to by a pointer variable ptr: %d\nValue pointed to by a pointer variable ptrvoid: %d\n", ptr, ptrvoid, *ptr, (int *)ptrvoid);
	return (0);
}
