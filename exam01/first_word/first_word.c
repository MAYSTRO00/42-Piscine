#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	if (argc == 2)
	{
		i = 0;
		while(argv[1][i] == ' ' || argv[1][i] == 9)
		{
			i++;
		}
		while(argv[1][i])
		{
			if(!(argv[1][i] == ' ' || argv[1][i] == 9))
			{
				write(1, &argv[1][i], 1);
			}
			else
				break;
			i++;
		}
		return (0);	
	}
	write(1, "\n", 1);
}
