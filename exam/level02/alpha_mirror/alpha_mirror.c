#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	char c;

	if(argc == 2)
	{
		i = 0;
		char *str = argv[1];
		while(str[i])
		{
			if(str[i] >= 'a' && str[i] <= 'z')
			{
				c = 'z' - (str[i] - 'a');
				write(1, &c, 1);
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
			{
				c = 'Z' - (str[i] - 'A');
				write(1, &c , 1);
			}
			else
				write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
