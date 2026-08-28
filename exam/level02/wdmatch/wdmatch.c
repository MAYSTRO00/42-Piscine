#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	len;

	if (argc == 3)
	{
		len = 0;
		j = 0;
		while (argv[1][len])
			len++;
		i = 0;
		while (argv[1][i] && argv[2][j])
		{
			if (argv[1][i] == argv[2][j])
				i++;
			j++;
		}
		if (len == i)
		{
			i = 0;
			while (argv[1][i])
			{
				write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return 0;
}
