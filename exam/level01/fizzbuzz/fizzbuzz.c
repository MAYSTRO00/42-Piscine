#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(int	nb)
{
	char c;
	if(nb > 0 && nb <= 9)
	{
		c = nb + '0';
		write(1, &c, 1);
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int	main(void)
{
	int i;

	i = 1;
	while(i <= 100)
	{
		if(i % 3 == 0 && i % 5 ==0)
		{
			ft_putstr("fizzbuzz");
			write(1, "\n", 1);
		}
		else if(i % 3 == 0)
		{
			ft_putstr("fizz");
			write(1, "\n", 1);
		}
		else if(i % 5 == 0)
		{
			ft_putstr("buzz");
			write(1, "\n", 1);
		}
		else
		{
			ft_putnbr(i);
			write(1, "\n", 1);
		}
		i++;
	}
	return 0;
}
