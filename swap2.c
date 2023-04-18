void	swap(int num1, int num2)
{
	int	tmp;

	tmp = num1;
	num1 = num2;
	num2 = tmp;
}

int	main(void)
{
	int	i1;
	int	i2;

	i1 = 1;
	i2 = 2;
	swap(i1, i2);
	return (0);
}
