#include <unistd.h>

void pair_impair()
{
	int	i;
	int	j;

	i = 1;
	j = 'a';
	while (i <= 26 && j <= 'z')
	{	
		if (i % 2 == 0)
		{
			char    c = j - 32;
            write (1, &c, 1);
		}
		else
			write (1, &j, 1);
	i++; 
	j++;
	}	
}

int	main(void) 
{
	pair_impair();
	return(0);
}
