#include <stdio.h>
//test
float	average(int *arr, int size)
{
	int	sum;
	int	i;

	sum = 0;
	i = 0;
	printf("arr: %p\n", &arr);
	printf("size: %p\n", &size);
	printf("sum: %p\n", &sum);
	while (i < size)
	{
		sum += arr[i];
		i++;
	}
	return ((sum * 1.0f) / size);
}

int	main(void)
{
	int	arr[] = {1, 2, 3};
	printf("average %f:\n",	average(arr, 3));
	return (0);
}
