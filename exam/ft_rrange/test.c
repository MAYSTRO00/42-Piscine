#include <stdlib.h>
#include <stdio.h>

int	ft_pos(int n)
{
	if (n < 0)
		return (-n);
	return n;
}

int     *ft_rrange(int start, int end)
{
	int size;
	int *tab;
	int i;

	size = ft_pos(end - start) + 1;
	tab = malloc(size * sizeof(int));
	if (tab == NULL)
		return 0;
	

	if (start <= end)
	{
		i = 0;
		while(i < size)
		{
			tab[i] = end - i;
			i++;
		}
	}
	else if(start > end)
	{
		i = 0;
		while(i < size)
		{
			tab[i] = end + i;
			i++;
		}
	}
	return tab;
}

int	main(void)
{
	int	*tab;
	int start = 0;
	int	end = -3;
	int size = ft_pos(end - start) + 1;
	int i = 0;
	tab = ft_rrange(start, end);

	while(i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return 0;
}
