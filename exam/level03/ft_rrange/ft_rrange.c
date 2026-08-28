#include <stdio.h>
#include <stdlib.h>

int ft_positive(int n)
{
	if (n < 0)
		return(-n);
	return n;
}

int	*ft_rrange(int start, int end)
{
	int	size;
	int	*tab;
	int i = 0;

	size = ft_positive(end - start) + 1;
	tab = malloc((size) * sizeof(int));
	if (tab == NULL)
		return 0;
	if(start <= end)
	{
		while(i < size)
		{
			tab[i] = end - i;
			i++;
		}
	}
	else if (start > end)
	{
		while(i < size)
		{
			tab[i] = end + i;
			i++;
		}
	}
	return (tab);
}

int	main(void)
{
	int	*tab;
	int i = 0;
	int size = ft_positive(3 - 1) + 1;

	tab = ft_rrange(1, 3);

	while(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	return 0;
}
