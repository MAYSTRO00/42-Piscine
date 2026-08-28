#include <unistd.h>

char	*rm_dup(char *str)
{
	int	i;
	int	pos;
	int	k;

	pos = 0;
	while(str[pos])
	{
		i = 0;
		while(i < pos && str[i] != str[pos])
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

int	main(int argc, char	**argv)
{
	char *s1;
	char *s2;
	int	i;
	int j;

	if(argc == 3)
	{
		s1 = rm_dup(argv[1]);
		s2 = rm_dup(argv[2]);

		i = 0;
		while(s1[i])
		{
			j = 0;
			while(s2[j])
			{
				if(s1[i] == s2[j])
				{
					write(1, &s1[i], 1);
					break;
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
