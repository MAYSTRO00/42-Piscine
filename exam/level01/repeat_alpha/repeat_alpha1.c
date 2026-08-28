#include <unistd.h>

int get_index(char c)
{
	char	*lowercase;
	char	*uppercase;
	char	*base;
	int i;

	lowercase = "abcdefghijklmnopqrstuvwxyz";
	uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	if(c >= 'a' && c <= 'z')
		base = lowercase;
	else if(c >= 'A' && c<= 'Z')
			base = uppercase;
	else
		return 1;

	i = 0;
	while(base[i])
	{
		if(c == base[i])
			return (i + 1);
		i++;
	}
	return 1;
}

int main(int argc, char **argv)
{
	int i;
	int j;
	int k;

	if(argc == 2)
	{
		j = 0;
		i = 0;
		while(argv[1][j])
		{
			i = get_index(argv[1][j]);
			k = 0;
			while(k < i)
			{
				write(1, &argv[1][j], 1);
				k++;
			}
			j++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
