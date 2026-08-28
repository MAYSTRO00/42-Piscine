#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while(s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char	s1[100] = "hello world";
	char	s2[] = "hello mami";

	int	i = ft_strcmp(s1, s2);
	printf("%d\n", i);
	return 0;
}

