#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	char	c[] = "hello";
	int	result = ft_strlen(c);
	printf("the lenght of string is %d", result);
	return 0;
}
