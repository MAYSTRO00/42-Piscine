#include <unistd.h>

int	main(void)
{
	int	i;
	int	h;
	
	i = 1;
	h = 'z';
	while (i <= 26 && h >= 'a')
	{
		if (i % 2 == 0)
		{
			char	c = h - 32;
			write(1, &c, 1);
		}
		else 
		write (1, &h, 1);
	i++;
	h--;
	}
}
