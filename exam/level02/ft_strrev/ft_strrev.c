#include <stdio.h>

char    *ft_strrev(char *str)
{
	int	i;
	int last;
	int	tmp;

	i = 0;
	while(str[i])
		i++;
	last = i - 1;
	i = 0;
	while(last > i)
	{
		tmp = str[i];
		str[i] = str[last];
		str[last] = tmp;
		i++;
		last--;
	}
	return str;
}

int main(void)
{
	char str[] = "hello world it`s the last day";
	printf("%s\n", ft_strrev(str));
	return 0;
}
