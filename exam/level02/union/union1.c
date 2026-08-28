#include <unistd.h>

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
	int i;
	int	j;

	if(argc == 3)
	{
		char *s1 = rm_dup(argv[1]);
		char *s2 = rm_dup(argv[2]);
		
		i = 0;
		while(s1[i])
		{
			write(1, &s1[i], 1);
			i++;
		}
		i = 0;
		while(s2[i])
		{
			j = 0;
			while(s1[j] && s1[j] != s2[i])
				j++;
			if(s1[j] == '\0')
			{
				write(1, &s2[i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}

