#include <unistd.h>

int	ft_atoi(char *str)
{
	int result = 0;
	int i = 0;

	while(str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return result;
}

int f_prime(int n)
{
	int i;

	if (n < 2)
		return 0;
	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return 0;
		i++;
	}
	return 1;
}

void ft_putnbr(int n)
{
	if(n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		char c = n + '0';
		write(1, &c, 1);
	}
}
int	main(int argc, char **argv)
{
	if(argc != 2)
	{
		write(1, "0\n", 2);
		return 0;
	}

	else
	{
		int n;
		int sum;
		int i;

		n = ft_atoi(argv[1]);
		if (n <= 0)
		{
			write(1, "0\n", 2);
			return 0;
		}
		i = 2;
		sum = 0;

		while(i <= n)
		{
			if(f_prime(i) == 1)
				sum += i;
			i++;
		}
		ft_putnbr(sum);
	}
	write(1, "\n", 1);
	return 0;
}
