#include <unistd.h>

char	*ft_strcat(char *s1, char *s2)
{
	int i;
	int	j;

	i = 0;
	while(s1[i])
		i++;
	j = 0;
	while(s2[j])
	{
		s1[i] = s2[j];
		j++;
		i++;
	}
	s1[i] = '\0';
	return s1;
}

char	*rm_dup(char *str)
{
	int	i;
	int	k;
	int	pos;

	pos = 0;
	while(str[pos])
	{
		i = 0;
		while(i < pos && str[pos] != str[i])
			i++;
		if(i < pos)
		{
			k = pos;
			while(str[k])
			{
				str[k] = str[k + 1];
				k++;
			}
		}
		else
			pos++;
	}
	return str;
}

int main(int argc, char **argv)
{
	char *s1;
	char *s2;
	char *str;
	char *strs;
	int	i;

	if(argc == 3)
	{
		s1 = argv[1];
		s2 = argv[2];
		str = ft_strcat(s1, s2);
		strs = rm_dup(str);

		i = 0;
		while(strs[i])
		{
			write(1, &strs[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
