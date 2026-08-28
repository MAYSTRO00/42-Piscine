#include <unistd.h>

int get_index(char c)
{
	int i;

	if (c >= 'a' && c <= 'z')
	{
		i = c - 'a' + 1;
		return i;
	}
	else if(c >= 'A' && c <= 'Z')
	{
		i = c - 'A' + 1;
		return i;
	}
	else
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
}
