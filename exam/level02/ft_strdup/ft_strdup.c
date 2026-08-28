#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return i;
}

char    *ft_strdup(char *src)
{
	int	i;
	char	*cpy;
	int	len;

	len = ft_strlen(src);
	cpy = (char *)malloc((len + 1) * sizeof(char));
	if (cpy == NULL)
		return NULL;

	i = 0;
	while(i < len)
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

int	main(void)
{
	char	*str = "hello world :)";
	char	*cpy = ft_strdup(str);
	printf("%s\n", cpy);
	free (cpy);
	return (0);
}
