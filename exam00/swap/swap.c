#include <stdio.h>

char	*ft_swap(char *str)
{
	int	i;
	i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			 str[i] = str[i] + 32;
		}
	i++;
	}
	return str;
}

int	main (void)
{
	char	c[] = "WELCOME TO 42";
	ft_swap(c);
	printf("%s", c);
	return 0;
	
} 
