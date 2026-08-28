#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	int	max;
	unsigned int check;
	unsigned int i;

	max = 0;
	if (len > 0)
	{
		i = 0;
		check = i + 1;
		while(check < len)
		{
			if(tab[i] < tab[check])
				i = check;
			check++;
		}
		max = tab[i];
	}
	return max;
}

int	main(void)
{
	int tab[] = {1, 5, 11, 9, 8};
	int c = max(tab, 5);
	printf("%d\n", c);
	return 0;
}
