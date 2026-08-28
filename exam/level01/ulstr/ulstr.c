#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	char c;

	if(argc == 2)
	{
		char	*ptr = argv[1];

		i = 0;
		while(ptr[i])
		{
			if(ptr[i] >= 'a' && ptr[i] <= 'z')
			{
				c = ptr[i] - 32;
				write(1, &c, 1);
			}
			else if (ptr[i] >= 'A' && ptr[i] <= 'Z')
			{
				c = ptr[i] + 32;
				write(1, &c, 1);
			}
			else
				write(1, &ptr[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
