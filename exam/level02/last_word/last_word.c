#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int	last;
	char *str;

	if (argc == 2)
	{
		i = 0;
		str = argv[1];
		while(str[i])
			i++;
		
		last = i - 1;
		i = 0;
		while(last >= i && (str[last] == ' ' || str[last] == 9))
			last--;
		while(last >= i && str[last] != ' ' && str[last] != 9)
			last--;
		i = last + 1;
		while(str[i] && str[i] != ' ' && str[i] != 9)
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
