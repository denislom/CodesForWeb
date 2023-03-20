#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// example of losing the address
// int	main(void)
// {
// 	int	*ptr;

// 	ptr = (int *)malloc(sizeof(int));
// 	*ptr = 5;
// 	ptr = (int *)malloc(sizeof(int));
// 	free(ptr);
// 	free(ptr);
// 	return (0);
// }

// example of losing the address
int	main(void)
{
	char	*name;

	name = (char *)malloc(sizeof("Toto" + 1));
	strcpy(name, "Toto");
	while (*name != '\0')
	{
		printf("%c", *name);
		name++;
	}
	return (0);
}