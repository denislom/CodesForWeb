#include <stdio.h>

void	display(char **str)
{
	printf("First line of function display: %s\n", *str);
	*str = "This is our second string.\n";
}

int	main(int argc, char **argv)
{
	char	*str;

	str = "This is our first string.";
	printf("Before call of function display: %s\n", str);
	display(&str);
	printf("After call of function display: %s", str);
	return (0);
}
