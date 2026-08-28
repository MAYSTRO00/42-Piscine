#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;

	if (argc == 2)
	{
		char	*ptr = argv[1];
		i = 0;
		while(ptr[i] == ' ' || ptr[i] == 9)
			i++;
		while (ptr[i] && (!(ptr[i] == ' ' || ptr[i] == 9)))
		{
			write(1, &ptr[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
